from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import os

def generate_launch_description():
    sentry_comm_node = Node(
        package='serial_comm',
        executable='sentry_comm_node',
        name='sentry_comm_node',
        parameters=[os.path.join(get_package_share_directory('serial_comm'), 'config', 'sentry_params.yaml')]
    )

    return LaunchDescription([sentry_comm_node])