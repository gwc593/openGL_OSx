cmake_minimum_required(VERSION 3.9)
set( CMAKE_VERBOSE_MAKEFILE on )
set(CMAKE_CXX_STANDARD 11)
project(openGLSandBox)

include_directories("${CMAKE_CURRENT_SOURCE_DIR}/include")
include_directories("${CMAKE_CURRENT_SOURCE_DIR}/deps/include")

set(CMAKE_CXX_FLAGS "-framework Cocoa -framework OpenGL -framework IOKit -framework CoreVideo")
find_package(glfw3 REQUIRED)

set(SOURCE_FILES src/main.cpp src/vector2.cpp include/vector2.hpp src/Time.cpp include/Time.hpp)

add_executable(openGLSandBox ${SOURCE_FILES})

target_link_libraries(openGLSandBox glfw)






