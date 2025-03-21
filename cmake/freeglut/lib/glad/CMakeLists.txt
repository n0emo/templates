cmake_minimum_required(VERSION 3.1)

project(glad)

add_library(glad_1_1 STATIC ./glad-gl-1.1/src/glad.c)
target_include_directories(glad_1_1 PUBLIC ./glad-gl-1.1/include)

add_library(glad_2_0 STATIC ./glad-gl-2.0/src/glad.c)
target_include_directories(glad_2_0 PUBLIC ./glad-gl-2.0/include)

add_library(glad_3_3 STATIC ./glad-gl-3.3/src/glad.c)
target_include_directories(glad_3_3 PUBLIC ./glad-gl-3.3/include)
