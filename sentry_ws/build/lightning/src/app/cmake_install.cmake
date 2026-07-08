# Install script for directory: /home/chen/sentry_try/sentry_ws/src/lightning-lm/src/app

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/chen/sentry_try/sentry_ws/install/lightning")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lightning/run_slam_offline" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lightning/run_slam_offline")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lightning/run_slam_offline"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/lightning" TYPE EXECUTABLE FILES "/home/chen/sentry_try/sentry_ws/src/lightning-lm/bin/run_slam_offline")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lightning/run_slam_offline" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lightning/run_slam_offline")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lightning/run_slam_offline"
         OLD_RPATH "/home/chen/sentry_try/sentry_ws/build/lightning/src:/usr/local/lib:/opt/ros/humble/lib:/home/chen/sentry_try/sentry_ws/build/lightning/src/core/miao/core:/home/chen/sentry_try/sentry_ws/build/lightning/src/core/miao/utils:/home/chen/sentry_try/sentry_ws/build/lightning/thirdparty/livox_ros_driver:/home/chen/sentry_try/sentry_ws/build/lightning:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lightning/run_slam_offline")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lightning/run_slam_online" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lightning/run_slam_online")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lightning/run_slam_online"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/lightning" TYPE EXECUTABLE FILES "/home/chen/sentry_try/sentry_ws/src/lightning-lm/bin/run_slam_online")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lightning/run_slam_online" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lightning/run_slam_online")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lightning/run_slam_online"
         OLD_RPATH "/home/chen/sentry_try/sentry_ws/build/lightning/src:/usr/local/lib:/opt/ros/humble/lib:/home/chen/sentry_try/sentry_ws/build/lightning/src/core/miao/core:/home/chen/sentry_try/sentry_ws/build/lightning/src/core/miao/utils:/home/chen/sentry_try/sentry_ws/build/lightning/thirdparty/livox_ros_driver:/home/chen/sentry_try/sentry_ws/build/lightning:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lightning/run_slam_online")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lightning/run_loc_offline" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lightning/run_loc_offline")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lightning/run_loc_offline"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/lightning" TYPE EXECUTABLE FILES "/home/chen/sentry_try/sentry_ws/src/lightning-lm/bin/run_loc_offline")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lightning/run_loc_offline" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lightning/run_loc_offline")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lightning/run_loc_offline"
         OLD_RPATH "/home/chen/sentry_try/sentry_ws/build/lightning/src:/usr/local/lib:/opt/ros/humble/lib:/home/chen/sentry_try/sentry_ws/build/lightning/src/core/miao/core:/home/chen/sentry_try/sentry_ws/build/lightning/src/core/miao/utils:/home/chen/sentry_try/sentry_ws/build/lightning/thirdparty/livox_ros_driver:/home/chen/sentry_try/sentry_ws/build/lightning:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lightning/run_loc_offline")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lightning/run_loc_online" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lightning/run_loc_online")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lightning/run_loc_online"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/lightning" TYPE EXECUTABLE FILES "/home/chen/sentry_try/sentry_ws/src/lightning-lm/bin/run_loc_online")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lightning/run_loc_online" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lightning/run_loc_online")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lightning/run_loc_online"
         OLD_RPATH "/home/chen/sentry_try/sentry_ws/build/lightning/src:/usr/local/lib:/opt/ros/humble/lib:/home/chen/sentry_try/sentry_ws/install/rm_referee_msgs/lib:/home/chen/sentry_try/sentry_ws/build/lightning/src/core/miao/core:/home/chen/sentry_try/sentry_ws/build/lightning/src/core/miao/utils:/home/chen/sentry_try/sentry_ws/build/lightning/thirdparty/livox_ros_driver:/home/chen/sentry_try/sentry_ws/build/lightning:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lightning/run_loc_online")
    endif()
  endif()
endif()

