cmake_minimum_required(VERSION 3.30)
project(Image_Processing)
find_package(OpenCV REQUIRED)
set(CMAKE_CXX_STANDARD 20)

add_executable(Image_Processing main.cpp)
target_link_libraries(Image_Processing ${OpenCV_LIBS})
