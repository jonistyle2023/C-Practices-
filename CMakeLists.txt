cmake_minimum_required(VERSION 3.30)
project(fundamentosProgramacion)

set(CMAKE_CXX_STANDARD 20)

add_executable(fundamentosProgramacion main.cpp)

#------------------------------------------------

# EJECUTABLES PARA LOS EJEMPLOS

## Ejecutable para ejemplo1
add_executable(ejemplo1 section1/ejemplo1.cpp)

## Ejecutable para ejemplo2
add_executable(ejemplo2 section1/ejemplo2.cpp)

## Ejecutable para ejemplo3
add_executable(ejemplo3 section1/ejemplo3.cpp)

## Ejecutable para ejemplo4
add_executable(ejemplo4 section2/ejemplo4.cpp)

## Ejecutable para ejemplo5
add_executable(ejemplo5 section2/ejemplo5.cpp)

## Ejecutable para ejemplo6
add_executable(ejemplo6 section2/ejemplo6.cpp)

## Ejecutable para ejemplo7
add_executable(ejemplo7 section2/ejemplo7.cpp)

## Ejecutable para ejemplo8
add_executable(ejemplo8 section3/ejemplo8.cpp)

## Ejecutable para ejemplo9
add_executable(ejemplo9 section3/ejemplo9.cpp)

## Ejecutable para ejemplo10
add_executable(ejemplo10 section3/ejemplo10.cpp)

## Ejecutable para ejemplo11
add_executable(ejemplo11 section3/ejemplo11.cpp)

## Ejecutable para ejemplo12
add_executable(ejemplo12 section3/ejemplo12.cpp)

## Ejecutable para ejemplo13
add_executable(ejemplo13 section4/ejemplo13.cpp)

## Ejecutable para ejemplo14
add_executable(ejemplo14 section4/ejemplo14.cpp)

#------------------------------------------------

# EJECUTABLES PARA LAS LECCIONES

## Ejecutable para lección1
add_executable(leccion1 lessons/leccion1.cpp)

#------------------------------------------------

# EJECUTABLES PARA LOS EJERCICIOS

## Ejecutable para el ejercicio1
add_executable(ejercicio1 exercises1-3/ejercicio1.cpp)

## Ejecutable para el ejercicio2
add_executable(ejercicio2 exercises1-3/ejercicio2.cpp)

## Ejecutable para el ejercicio3
add_executable(ejercicio3 exercises1-3/ejercicio3.cpp)

## Ejecutable para el ejercicio4
add_executable(ejercicio4 exercises1-3/ejercicio4.cpp)

## Ejecutable para el ejercicio5
add_executable(ejercicio5 exercises1-3/ejercicio5.cpp)

## Ejecutable para el ejercicio6
add_executable(ejercicio6 exercises1-3/ejercicio6.cpp)

## Ejecutable para el ejercicio7
add_executable(ejercicio7 exercises1-3/ejercicio7.cpp)

## Ejecutable para el ejercicio8
add_executable(ejercicio8 exercises1-3/ejercicio8.cpp)

#------------------------------------------------

# TALLERES
## Ejecutable para el taller1
add_executable(taller1 workshops/taller1.cpp)