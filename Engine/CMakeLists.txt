cmake_minimum_required(VERSION 3.10)

project(Engine)

set(CMAKE_CXX_STANDARD 23)

add_executable(Engine
        main.cpp
)

target_link_libraries(Engine)