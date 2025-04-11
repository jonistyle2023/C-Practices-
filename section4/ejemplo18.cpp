//
// Created by jonat on 10/4/2025.
//

/* Librerias - Funciones Matemáticas
Autor: Jonathan Panchana
Curso: SW 2/2 */
//Bloque de Declaraciones
//Definir librerías
#include<iostream>
#include<math.h>
//Espacio de nombres
using namespace std;
//Definir variables globales
float A, B, C, D;
//Función principal
int main()
{
    //Bloque de instrucciones
    //Inicialización de variables
    D=0;
    //Ingreso de datos
    cout<<"\n********************";
    cout<<"\n****** MATH.H ******";
    cout<<"\n********************";
    cout<<"\nIngrese el valor de A: ";
    cin>>A;
    cout<<"\nIngrese el valor de B: ";
    cin>>B;
    cout<<"\nIngrese el valor de C: ";
    cin>>C;
    //Proceso + salida de datos
    //CEIL
    D=ceil(A);
    cout<<"\nRedondeo 1: "<<D;
    //floor
    D=floor(A);
    cout<<"\nRedondeo 2: "<<D;
    //Valor Absoluto Fabs
    D=fabs(A);
    cout<<"\nValor Absoluto es: "<<D;
    //Residuo Fmod
    D=fmod(A,B);
    cout<<"\nResiduo es: "<<D;
    //Raiz Cuadrada sqrt
    D=sqrt(C);
    cout<<"\nRaiz Cuadrada C es: "<<D;
    //Potencia pow
    D=pow(B,C); //B base y C exponente
    cout<<"\nPotencia B^C es: "<<D;
}