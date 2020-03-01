cmake_minimum_required(VERSION 3.9)

project(openGLSandBox)

link_directories(/usr/local/lib/)

include_directories("${CMAKE_CURRENT_SOURCE_DIR}/include")

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_CXX_FLAGS "-framework Cocoa -framework OpenGL -framework IOKit -framework CoreVideo")
find_package(glfw3 REQUIRED)

set(SOURCE_FILES src/main.cpp src/vector2.cpp include/vector2.hpp)

add_executable(openGLSandBox ${SOURCE_FILES} src/vector2.cpp include/vector2.hpp)

target_link_libraries(openGLSandBox glfw)




