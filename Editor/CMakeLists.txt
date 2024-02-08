# QT6 cmake project

cmake_minimum_required(VERSION 3.19)

project(Editor)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_AUTOMOC ON)

set(CMAKE_AUTOUIC ON)

set(CMAKE_AUTORCC ON)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(Qt6 COMPONENTS Core Gui Widgets REQUIRED)

add_executable(Editor
        main.cpp

        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
)

target_link_libraries(Editor PRIVATE Qt6::Core Qt6::Gui Qt6::Widgets)



