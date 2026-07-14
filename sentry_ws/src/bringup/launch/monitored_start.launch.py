# =============================================================================
# monitored_start.launch.py
# 哨兵巡航系统主启动文件
#
# 启动顺序：
#   1. LiDAR 驱动 (livox_ros_driver2)
#   2. Super-LIO 里程计 (发布 /lio/robo/odom)
#   3. Lightning 定位
#   4. TF Only Odom (补齐 TF 树)
#   5. Livox → Scan 转换
#   6. CAN 通信
#   7. RViz2 可视化
#   8. 地图服务器 + Lifecycle Manager
#   9. Nav2 导航栈
#  10. 哨兵巡航 BT 节点 (延迟启动)
# =============================================================================

import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, TimerAction, LogInfo
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


def generate_launch_description():
    bringup_dir = get_package_share_directory("bringup")

    # ---- Launch arguments ----
    use_sim_time = LaunchConfiguration("use_sim_time", default="false")
    log_level = LaunchConfiguration("log_level", default="info")
    params_file = LaunchConfiguration(
        "params_file",
        default=os.path.join(bringup_dir, "config", "singlenav2_params.yaml"),
    )

    # ================================================================
    # 1) LiDAR 驱动 (Livox MID360)
    # ================================================================
    livox_driver = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(
                get_package_share_directory("livox_ros_driver2"),
                "launch",
                "msg_MID360_launch.py",
            )
        )
    )

    # ================================================================
    # 2) Super-LIO (LiDAR 里程计)
    #     发布 /lio/odom, /lio/imu/odom, /lio/robo/odom
    # ================================================================
    super_lio = Node(
        package="super_lio",
        executable="super_lio_node",
        name="super_lio_node",
        output="screen",
        arguments=["--ros-args", "--log-level", log_level],
        parameters=[
            os.path.join(
                get_package_share_directory("super_lio"), "config", "livox_360.yaml"
            ),
        ],
    )

    # ================================================================
    # 3) Lightning 定位
    # ================================================================
    lightning_loc = Node(
        package="lightning",
        executable="run_loc_online",
        name="run_loc_online",
        output="screen",
        arguments=[
            "--log-level", log_level,
            "--config",
            os.path.join(bringup_dir, "config", "default_livox.yaml"),
        ],
        parameters=[{"use_sim_time": use_sim_time}],
    )

    # ================================================================
    # 4) TF Only Odom (补齐 TF 树)
    #    静态 TF: map→odom, base_link→livox_frame
    #    动态 TF: odom→base_link (从 /lio/robo/odom 计算)
    # ================================================================
    tf_only_odom_node = Node(
        package="sentry_navigation",
        executable="tf_only_odom",
        name="tf_only_odom",
        output="screen",
        arguments=["--log-level", log_level],
        parameters=[os.path.join(bringup_dir, "config", "lidar.yaml")],
    )

    # ================================================================
    # 5) Livox → Scan 转换
    # ================================================================
    livox_to_scan_node = Node(
        package="livox_to_scan",
        executable="livox_to_scan_node",
        name="livox_to_scan_node",
        output="screen",
        arguments=["--log-level", log_level],
        parameters=[os.path.join(bringup_dir, "config", "livox_to_scan.yaml")],
    )

    # ================================================================
    # 6) CAN 通信
    # ================================================================
    can_comm = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(
                get_package_share_directory("can_comm"), "launch", "can_comm.launch.py"
            )
        )
    )

    # ================================================================
    # 7) RViz2 可视化
    # ================================================================
    rviz2_node = Node(
        package="rviz2",
        executable="rviz2",
        name="rviz2",
        output="screen",
        arguments=[
            "-d", os.path.join(bringup_dir, "config", "nav2_default_view.rviz"),
            "--ros-args", "--log-level", "warn",
        ],
    )

    # ================================================================
    # 8) 地图服务器 (map_server)
    #    加载静态地图供 Nav2 全局代价地图使用
    # ================================================================
    map_server_node = Node(
        package="nav2_map_server",
        executable="map_server",
        name="map_server",
        output="screen",
        parameters=[{
            "use_sim_time": use_sim_time,
            "yaml_filename": os.path.join(bringup_dir, "map", "map.yaml"),
        }],
    )

    map_lifecycle_manager = TimerAction(
        period=1.0,
        actions=[
            Node(
                package="nav2_lifecycle_manager",
                executable="lifecycle_manager",
                name="lifecycle_manager_map",
                output="screen",
                parameters=[{
                    "use_sim_time": use_sim_time,
                    "autostart": True,
                    "node_names": ["map_server"],
                }],
            )
        ],
    )

    # ================================================================
    # 9) Nav2 导航栈
    # 使用系统 nav2_bringup 的 navigation_launch.py,
    # 传入我们的 singlenav2_params.yaml
    # ================================================================
    nav2_stack = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(
                get_package_share_directory("nav2_bringup"),
                "launch",
                "navigation_launch.py",
            )
        ),
        launch_arguments={
            "use_sim_time": use_sim_time,
            "autostart": "true",
            "params_file": params_file,
            "use_composition": "False",
            "container_name": "nav2_container",
        }.items(),
    )

    # ================================================================
    # 10) 哨兵巡航 BT 节点 (sentry_eval_bt_node)
    #    延迟 5s 等待 Nav2 + map_server 就绪
    # ================================================================
    sentry_patrol = TimerAction(
        period=5.0,
        actions=[
            LogInfo(msg=">>> [bringup] 启动哨兵巡航 BT 节点"),
            Node(
                package="sentry_eval_bt",
                executable="sentry_eval_bt_node",
                name="sentry_eval_bt_node",
                output="screen",
                arguments=["--log-level", log_level],
                parameters=[
                    params_file,
                    {
                        "use_sim_time": use_sim_time,
                        "bt_xml": os.path.join(
                            get_package_share_directory("sentry_eval_bt"),
                            "config",
                            "waypoints_bt.xml",
                        ),
                    },
                ],
            ),
        ],
    )

    ld = LaunchDescription()
    ld.add_action(livox_driver)
    ld.add_action(super_lio)
    ld.add_action(lightning_loc)
    ld.add_action(tf_only_odom_node)
    ld.add_action(livox_to_scan_node)
    ld.add_action(can_comm)
    ld.add_action(rviz2_node)
    ld.add_action(map_server_node)
    ld.add_action(map_lifecycle_manager)
    ld.add_action(nav2_stack)
    ld.add_action(sentry_patrol)

    return ld
