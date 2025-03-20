cmake_minimum_required(VERSION 3.16)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project(app)

find_package(OpenGL REQUIRED)

add_subdirectory(lib/glfw3)
add_subdirectory(lib/glm)
add_subdirectory(lib/SOIL2)
add_subdirectory(lib/glew/build/cmake)

add_executable(app
    src/main.cpp
)

target_include_directories(app
    PRIVATE lib
    PRIVATE lib/glfw/include
    PRIVATE lib/SOIL2/src/SOIL2
    PRIVATE lib/glew/include
)

target_link_libraries(app
    PRIVATE ${OPENGL_LIBRARIES}
    PRIVATE glfw
    PRIVATE glew_s
    PRIVATE glm
    PRIVATE soil2
)
