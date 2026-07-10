#!/bin/bash
set -e

SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)"

echo ">>> 检查 sudo 权限..."
if ! sudo -v; then
    echo "错误：需要 sudo 权限才能执行安装，请确保有管理员权限"
    exit 1
fi
echo ">>> sudo 凭据已缓存"

# 1、Pangolin
cd "$SCRIPT_DIR/src/lightning-lm/thirdparty"
if [ -f "Pangolin-0.9.3/build/install_manifest.txt" ]; then
    echo ">>> Pangolin 已安装，跳过编译"
else
    echo ">>> 开始编译安装 Pangolin..."
    if ! command -v unzip &> /dev/null; then
        sudo apt install -y unzip
    fi
    if [ ! -d "Pangolin-0.9.3" ]; then
        unzip Pangolin-0.9.3.zip
    fi
    cd Pangolin-0.9.3/ && mkdir -p build && cd build
    cmake .. && make -j$(nproc) && sudo make install
    echo ">>> Pangolin 编译安装完成"
fi

# 2、依赖
cd "$SCRIPT_DIR" && bash depend_install.sh

# 3、依赖消息包
colcon build --packages-select rm_referee_msgs sentry_msgs --parallel-workers 1
if [ $? -ne 0 ]; then
    echo "依赖消息包编译失败，终止脚本"
    exit 1
fi
echo "依赖消息包编译完成"

# 4、lightning
MAKEFLAGS="-j2" colcon build --packages-select lightning --parallel-workers 1
if [ $? -ne 0 ]; then
    echo "lightning-lm 编译失败，终止脚本"
    exit 1
fi
echo "lightning-lm 编译完成"

# 5、地图占位
mkdir -p "$SCRIPT_DIR/src/bringup/map"
touch "$SCRIPT_DIR/src/bringup/map/map.yaml" "$SCRIPT_DIR/src/bringup/map/map.pgm"

# 6、导航
colcon build --cmake-args -DCMAKE_BUILD_TYPE=Release

