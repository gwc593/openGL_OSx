cmake_minimum_required(VERSION 3.9)
set(CMAKE_VERBOSE_MAKEFILE ON)
project(openGLSandBox)
link_directories(/usr/local/lib/)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "-framework Cocoa -framework OpenGL -framework IOKit -framework CoreVideo")
find_package(glfw3 REQUIRED)

set(SOURCE_FILES main.cpp)

add_executable(openGLSandBox ${SOURCE_FILES})

target_link_libraries(openGLSandBox glfw)




