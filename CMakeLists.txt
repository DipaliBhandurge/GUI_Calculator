cmake_minimum_required(VERSION 3.16)

project(GUI_calc)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)

set(CMAKE_PREFIX_PATH "C:/Qt/6.12.0/mingw_64")

find_package(Qt6 REQUIRED COMPONENTS Widgets)

add_executable(GUI_calc
    src/main.cpp
    src/mainwindow.cpp
    src/mainwindow.h
)

target_link_libraries(GUI_calc PRIVATE Qt6::Widgets)