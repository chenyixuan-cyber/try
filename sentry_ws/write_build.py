#!/usr/bin/env python3
content = r"""#!/bin/bash
set -e

# 记录脚本根目录
SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)"

# 1、第三方插件 Pangolin 编译安装
cd "$SCRIPT_DIR/src/lightning-lm/thirdparty"

# 检查 Pangolin 是否已安装（避免重复编译和 sudo 等待）
if [ -f "Pangolin-0.9.3/build/install_manifest.txt" ]; then
    echo ">>> Pangolin 已安装，跳过编译"
else
    echo ">>> 开始编译安装 Pangolin..."
    # 检查 unzip 是否可用
    if ! command -v unzip &> /dev/null; then
        echo ">>> 未找到 unzip，尝试安装..."
        sudo apt install -y unzip
    fi
    if [ ! -d "Pangolin-0.9.3" ]; then
        unzip Pangolin-0.9.3.zip
    fi
    cd Pangolin-0.9.3/
    mkdir -p build
    cd build
    cmake ..
    make -j$(nproc)
    sudo make install
    echo ">>> Pangolin 编译安装完成"
fi

# 2、依赖库安装
cd "$SCRIPT_DIR"
bash depend_install.sh

# 3、lightning-lm安装，注意，不建议把lightning-lm与其他包同时编译
cd "$SCRIPT_DIR"
colcon build --packages-select lightning
if [ $? -ne 0 ]; then
    echo "lightning-lm 编译失败，终止脚本"
    exit 1
fi
echo "lightning-lm 编译完成，继续执行"

# 3.5、地图文件占位
mkdir -p "$SCRIPT_DIR/src/bringup/map"
touch "$SCRIPT_DIR/src/bringup/map/map.yaml"
touch "$SCRIPT_DIR/src/bringup/map/map.pgm"

# 4、导航系统编译安装
cd "$SCRIPT_DIR"
colcon build --cmake-args -DCMAKE_BUILD_TYPE=Release
"""

with open('/home/chen/sentry_try/sentry_ws/build.sh', 'w') as f:
    f.write(content)
print("build.sh written successfully")
