from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import os


def generate_launch_description():
    config_file_path = os.path.join(
        get_package_share_directory('can_comm'), 'config', 'can_params.yaml')

    return LaunchDescription([
        Node(
            package='can_comm',
            executable='can_receive_node',
            name='can_receive_node',
            output='screen',
            parameters=[config_file_path],
        ),
        Node(
            package='can_comm',
            executable='can_send_node',
            name='can_send_node',
            output='screen',
            parameters=[config_file_path],
        ),
        Node(
            package='can_comm',
            executable='vyaw_tf_yaw_controller_node',
            name='vyaw_tf_yaw_controller_node',
            output='screen',
            parameters=[config_file_path],
        ),
    ])