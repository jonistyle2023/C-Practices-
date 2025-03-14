cmake_minimum_required(VERSION 3.30)
project(fundamentosProgramacion)

set(CMAKE_CXX_STANDARD 20)

add_executable(fundamentosProgramacion main.cpp)

# Ejecutable para ejemplo1
add_executable(ejemplo1 ejemplo1/ejemplo1.cpp
        ejemplo4/ejemplo4.cpp
        ejemplo4/ejemplo4.h
        "Ejemplo5/ejemplo5.cpp"
        "Ejemplo5/ejemplo5.h"
        ejemplo6/ejemplo6.cpp
        ejemplo6/ejemplo6.h
        ejemplo7/ejemplo7.cpp
        ejemplo7/ejemplo7.h)

# Ejecutable para ejemplo2
add_executable(ejemplo2 ejemplo2/ejemplo2.cpp)

# Ejecutable para ejemplo3
add_executable(ejemplo3 ejemplo3/ejemplo3.cpp)

# Ejecutable para ejemplo4
add_executable(ejemplo4 ejemplo4/ejemplo4.cpp)

# Ejecutable para ejemplo5
add_executable(ejemplo5 ejemplo5/ejemplo5.cpp)

# Ejecutable para ejemplo6
add_executable(ejemplo6 ejemplo6/ejemplo6.cpp)

# Ejecutable para ejemplo7
add_executable(ejemplo7 ejemplo7/ejemplo7.cpp)