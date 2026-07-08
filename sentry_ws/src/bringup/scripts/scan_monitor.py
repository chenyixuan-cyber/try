#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from tf2_ros import Buffer, TransformListener
from std_msgs.msg import Bool
import sys
import time

class TFMonitor(Node):
    def __init__(self):
        super().__init__('tf_monitor_node')
        self.tf_buffer = Buffer()
        self.tf_listener = TransformListener(self.tf_buffer, self)
        
        # 定义需要检测的链条关系 [(target, source), ...]
        self.required_transforms = [
            ('map', 'odom'),
            ('odom', 'base_link'),
            ('base_link', 'livox_frame')
        ]
        
        # 重启信号发布者
        self.restart_pub = self.create_publisher(Bool, '/system/restart_request', 10)
        
        # 超时控制
        self.start_time = time.monotonic()
        self.timeout_seconds = 4.0
        self.restart_triggered = False

        self.timer = self.create_timer(1.0, self.check_transforms)
        self.get_logger().info("TF Monitor started. Waiting for TF chain: map -> odom -> base_link -> livox_frame")

    def check_transforms(self):
        # 如果已经触发了重启，持续发送信号并停止检测逻辑
        if self.restart_triggered:
            self.trigger_restart()
            return

        all_ok = True
        for target, source in self.required_transforms:
            if not self.tf_buffer.can_transform(target, source, rclpy.time.Time(), timeout=rclpy.duration.Duration(seconds=0)):
                self.get_logger().warn(f"Waiting for transform: {target} <- {source}")
                all_ok = False
                break 
        
        if all_ok:
            self.get_logger().info("✅ Full TF chain detected! Exiting to trigger navigation launch.")
            # 退出当前节点，返回成功状态码 0
            sys.exit(0)
        
        # 检查超时
        elapsed = time.monotonic() - self.start_time
        if elapsed > self.timeout_seconds:
            self.get_logger().error(f"TF Chain timeout ({elapsed:.1f}s > {self.timeout_seconds}s). Triggering system restart.")
            self.restart_triggered = True
            self.trigger_restart()

    def trigger_restart(self):
        """发送重启信号"""
        msg = Bool()
        msg.data = True
        self.restart_pub.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = TFMonitor()
    try:
        rclpy.spin(node)
    except SystemExit:
        rclpy.shutdown()
    except Exception as e:
        print(e)

if __name__ == '__main__':
    main()