# =============================================================================
# monitored_start.launch.py
# 哨兵巡航系统主启动文件
#
# 启动顺序：
#   1. LiDAR 驱动 (livox_ros_driver2)
#   2. FAST-LIO 里程计
#   3. Lightning 定位
#   4. Livox → Scan 转换
#   5. 串口通信 / CAN 通信
#   6. 裁判系统
#   7. Nav2 导航栈
#   8. 哨兵巡航 BT 节点 (延迟启动)
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
    # 2) FAST-LIO (LiDAR 里程计)
    # ================================================================
    fast_lio = Node(
        package="fast_lio",
        executable="fastlio_mapping",
        name="fastlio_mapping",
        output="screen",
        arguments=["--log-level", log_level],
        parameters=[
            os.path.join(
                get_package_share_directory("fast_lio"), "config", "mid360.yaml"
            ),
            {"use_sim_time": use_sim_time},
        ],
    )

    # ================================================================
    # 3) Lightning 定位 (map → odom TF)
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
    # 4) Livox → Scan 转换
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
    # 5) 串口通信 (底盘控制)
    # ================================================================
    serial_comm_node = Node(
        package="serial_comm",
        executable="sentry_comm_node",
        name="sentry_comm_node",
        output="screen",
        arguments=["--log-level", log_level],
        parameters=[os.path.join(
            get_package_share_directory("serial_comm"),
            "config", "sentry_params.yaml",
        )],
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
    # 7) 裁判系统
    # ================================================================
    referee = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(
                get_package_share_directory("rm_referee"),
                "launch",
                "referee_node.launch.py",
            )
        )
    )

    # ================================================================
    # 8) Nav2 导航栈
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
    # 9) 哨兵巡航 BT 节点 (sentry_eval_bt_node)
    #    延迟 5s 等待 Nav2 就绪
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
    ld.add_action(fast_lio)
    ld.add_action(lightning_loc)
    ld.add_action(livox_to_scan_node)
    ld.add_action(serial_comm_node)
    ld.add_action(can_comm)
    ld.add_action(referee)
    ld.add_action(nav2_stack)
    ld.add_action(sentry_patrol)

    return ld