#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2
import os, time
from ament_index_python.packages import get_package_share_directory

class ImageSaver(Node):
    def __init__(self):
        super().__init__('image_saver')
        self.bridge = CvBridge()
        pkg_share = get_package_share_directory('image_saver')
        self.outdir = os.path.join(pkg_share, 'images')
        os.makedirs(self.outdir, exist_ok=True)
        self.last = 0.0
        self.sub = self.create_subscription(
            Image, '/camera_head/color/image_raw',
            self.cb, 10)

    def cb(self, msg: Image):
        now = time.time()
        if now - self.last < 1.0:
            return
        self.last = now
        cv_img = self.bridge.imgmsg_to_cv2(msg, 'bgr8')
        fname = os.path.join(self.outdir, f'{int(now)}.jpg')
        cv2.imwrite(fname, cv_img)
        self.get_logger().info(f'Saved {fname}')

def main(args=None):
    rclpy.init(args=args)
    node = ImageSaver()
    try:
        rclpy.spin(node)
    finally:
        rclpy.shutdown()

if __name__ == '__main__':
    main()
