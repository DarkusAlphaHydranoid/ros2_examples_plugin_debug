FROM ros:rolling-ros-base

RUN apt update && \
    apt install ros-rolling-class-loader-dbgsym -y && \
    apt install gdb git -y

RUN mkdir /home/ws/src -p && \
    cd /home/ws/src && \
    git clone https://github.com/DarkusAlphaHydranoid/ros2_examples_plugin_debug.git

WORKDIR /home/ws
    
