#!/bin/bash
set -e

echo ">>> 开始安装系统依赖..."

# 检查单个包是否已安装
pkg_installed() {
    dpkg -s "$1" &>/dev/null
}

# 所有需要安装的包
ALL_PACKAGES=(
    libopencv-dev
    libpcl-dev
    pcl-tools
    libyaml-cpp-dev
    libgoogle-glog-dev
    libgflags-dev
    nlohmann-json3-dev
    ros-humble-pcl-conversions
    ros-humble-navigation2
    ros-humble-nav2-msgs
    ros-humble-nav2-bringup
    ros-humble-pcl-ros
    ros-humble-tf2-ros
    ros-humble-robot-localization
    ros-humble-rmw-cyclonedds-cpp
    ros-humble-spatio-temporal-voxel-layer
    ros-humble-behaviortree-cpp
    libboost-system-dev
    libusb-1.0-0-dev
    ros-humble-realsense2-camera
    ros-humble-realsense2-description
)

# 只收集缺失的包
MISSING=()
for pkg in "${ALL_PACKAGES[@]}"; do
    if ! pkg_installed "$pkg"; then
        MISSING+=("$pkg")
    fi
done

if [ ${#MISSING[@]} -eq 0 ]; then
    echo ">>> 所有依赖已安装，跳过"
    exit 0
fi

echo ">>> 还有 ${#MISSING[@]} 个依赖未安装，开始安装..."
sudo apt update
sudo apt install -y "${MISSING[@]}"
echo ">>> 依赖安装完成"