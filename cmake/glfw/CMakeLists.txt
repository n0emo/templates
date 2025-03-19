cmake_minimum_required(VERSION 3.16)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project(app)

find_package(OpenGL REQUIRED)

add_subdirectory(lib/glfw3)
set(GLAD "${GLFW_SOURCE_DIR}/deps/glad/glad.h"
         "${GLFW_SOURCE_DIR}/deps/glad.c")

add_executable(app
    src/main.cpp
)

target_link_libraries(app
    PRIVATE glfw
    PRIVATE ${OPENGL_gl_LIBRARY}
    PRIVATE ${OPENGL_glu_LIBRARY}
)
