cmake_minimum_required(VERSION 3.16)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project(app)

find_package(OpenGL REQUIRED)

set(FREEGLUT_BUILD_DEMOS OFF CACHE BOOL "Disable building FreeGLUT demos")
set(FREEGLUT_BUILD_TESTS OFF CACHE BOOL "Disable building FreeGLUT tests")
set(FREEGLUT_BUILD_SHARED_LIBS OFF CACHE BOOL "Disable building FreeGLUT shared libraries")
add_subdirectory(lib/freeglut)

add_executable(app
    src/main.cpp
)

target_link_libraries(app
    PRIVATE freeglut_static
    PRIVATE ${OPENGL_opengl_LIBRARY}
    PRIVATE ${OPENGL_glu_LIBRARY}
)
