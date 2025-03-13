cmake_minimum_required(VERSION 3.30)
project(fundamentosProgramacion)

set(CMAKE_CXX_STANDARD 20)

add_executable(fundamentosProgramacion main.cpp)

# Ejecutable para ejemplo1
add_executable(ejemplo1 ejemplo1/ejemplo1.cpp)

# Ejecutable para ejemplo2
add_executable(ejemplo2 ejemplo2/ejemplo2.cpp)

# Ejecutable para ejemplo3
add_executable(ejemplo3 ejemplo3/ejemplo3.cpp)
