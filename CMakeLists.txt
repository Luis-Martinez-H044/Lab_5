cmake_minimum_required(VERSION 3.10)
project(ProyectoJSON C)

set(CMAKE_C_STANDARD 99)
add_executable(proyecto src/main.c src/json.c)
include_directories(/usr/include)
target_link_libraries(proyecto cjson)