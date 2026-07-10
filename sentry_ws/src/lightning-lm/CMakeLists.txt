cmake_minimum_required(VERSION 3.16)

project(lightning)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Default to C++17
if (NOT CMAKE_CXX_STANDARD)
    set(CMAKE_CXX_STANDARD 17)
endif ()

# 默认 Release，但允许 colcon / 用户在命令行通过 -DCMAKE_BUILD_TYPE=Debug 覆盖
if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif ()

# -------------------------------------------------------------
# 导入第三方库，同时做一些全局编译选项配置
#
# PCL_NO_PRECOMPILE — 禁用 PCL 预编译头
# 注意：此宏会显著增加编译内存开销（每个 .cc 独立实例化 PCL 模板），
# 全量编译时请用 MAKEFLAGS="-j2" 限制并行度，避免内存耗尽卡死。
add_definitions("-DPCL_NO_PRECOMPILE")

# 基础 flags
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fPIC -fopenmp")

# Release 优化（无 -g，无 -ggdb；-j2 以下并行度可安全编译）
set(CMAKE_CXX_FLAGS_RELEASE "-O2 -DNDEBUG -fopenmp -fPIC")

# Debug 模式才加 -g
set(CMAKE_CXX_FLAGS_DEBUG "-O0 -g -ggdb -fopenmp -fPIC")

# C mode
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fPIC")


if (CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
    add_compile_options(-Wall -Wextra -Wpedantic)
endif ()

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)
# set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/libs)
# set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/libs)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)
include(cmake/packages.cmake)
# rm_referee_msgs 恢复使用（裁判系统消息）

# msg 和 srv
set(MY_SRV_FILES "")
set(SRC_DIR ${PROJECT_SOURCE_DIR}/srv)
file(GLOB_RECURSE SRC_FILES ${SRC_DIR}/*.srv)
foreach (SRC_FILE ${SRC_FILES})
    file(RELATIVE_PATH REL_PATH ${SRC_DIR} ${SRC_FILE})
    list(APPEND MY_SRV_FILES ${PROJECT_SOURCE_DIR}:srv/${REL_PATH})
endforeach ()

rosidl_generate_interfaces(${PROJECT_NAME}
        ${MY_SRV_FILES}
        ${MY_MSG_FILES}
        ${MY_ACTION_FILES}
        DEPENDENCIES std_msgs geometry_msgs sensor_msgs nav_msgs
)

include_directories(
        ${CMAKE_CURRENT_BINARY_DIR}/rosidl_generator_cpp
)

install(DIRECTORY config
        DESTINATION share/${PROJECT_NAME}
)

add_subdirectory(thirdparty/livox_ros_driver)

add_subdirectory(src)

ament_package()
