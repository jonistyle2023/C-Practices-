//
// Created by jonat on 10/4/2025.
//

#ifndef MILIBRERIA_H
#define MILIBRERIA_H

/*
Mi librería
Autor: Jonathan Panchana Rodríguez
Curso: SW 2/2
Fecha: 10/04/2025
 */

// Funciones
// Función Suma de dos números
float F_suma(float X, float Y)
{
    return X + Y;
}

// Función segunda potencia de un número
float F_potencia(float X)
{
    return X * X;
}

// Función f(x)=x+b
float F_funcionx(float X, float B)
{
    return X + B;
}

// Función a*x^2+bx+c

float F_funciony(float A, float X, float B, float C)
{
    return (A*X*X)+(B*X)+C;
}

#endif //MILIBRERIA_H
