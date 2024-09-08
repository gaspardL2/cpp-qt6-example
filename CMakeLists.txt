cmake_minimum_required(VERSION 3.29)
project(qt_hello_example)

set(CMAKE_CXX_STANDARD 23)

if(CMAKE_VERSION VERSION_LESS "3.7.0")
    set(CMAKE_INCLUDE_CURRENT_DIR ON)
endif ()

find_package(Qt6 REQUIRED COMPONENTS Core)
find_package(Qt6Widgets REQUIRED)
add_executable(qt_hello_example
        main.cpp
)
target_link_libraries(qt_hello_example PRIVATE Qt6::Core Qt6::Widgets)