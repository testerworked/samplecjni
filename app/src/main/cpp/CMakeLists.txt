cmake_minimum_required(VERSION 3.22.1)
project(MyNativeLib)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(native-lib SHARED
        native-lib.cpp)

target_include_directories(native-lib PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(native-lib log c++_shared)