cmake_minimum_required(VERSION 3.12)
project(gl_test)

set(CMAKE_CXX_STANDARD 14)

find_package(OpenGL REQUIRED)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/glfw/include)
link_directories(${CMAKE_CURRENT_SOURCE_DIR}/glfw/libs)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/glm)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/glew/include/GL)
link_directories(${CMAKE_CURRENT_SOURCE_DIR}/glew/lib/Release/x64)

add_executable(gl_test main.cpp common/shader.cpp common/shader.h common/texture.cpp common/texture.h)
target_link_libraries(gl_test glew32 glfw3 ${OPENGL_LIBRARIES})
