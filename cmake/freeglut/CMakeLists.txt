cmake_minimum_required(VERSION 3.16)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project(app)

find_package(OpenGL REQUIRED)

set(FREEGLUT_BUILD_DEMOS OFF CACHE BOOL "Disable building FreeGLUT demos")
set(FREEGLUT_BUILD_TESTS OFF CACHE BOOL "Disable building FreeGLUT tests")
set(FREEGLUT_BUILD_SHARED_LIBS OFF CACHE BOOL "Disable building FreeGLUT shared libraries")
add_subdirectory(lib/freeglut)

add_subdirectory(lib/glm)
add_subdirectory(lib/SOIL2)
add_subdirectory(lib/glad)

add_executable(app
    src/main.cpp
)

target_include_directories(app
    PRIVATE lib
    PRIVATE lib/freeglut/include
    PRIVATE lib/SOIL2/src/SOIL2
)

target_link_libraries(app
    PRIVATE ${OPENGL_LIBRARIES}
    PRIVATE freeglut_static
    PRIVATE glad_1_1
    PRIVATE glm
    PRIVATE soil2
)
