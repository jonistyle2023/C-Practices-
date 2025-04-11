/*Ejercicios con MiLibreria
Autor: Jonathan Panchana Rodríguez
Curso: SW 2/2
Fecha: 10/04/2025 */
//Bloque de Declaraciones
//Definir librerías
#include<iostream>
#include"MiLibreria.h"
//Espacio de nombres
using namespace std;
//Definir variables globales
float A, B, C;
//Función Principal
int main()
{
    //Bloque de Instrucciones
    //Inicialización de variables
    C=0;
    //Ingreso de datos
    cout<<"\n********************";
    cout<<"\n******* SUMA *******";
    cout<<"\n********************";
    cout<<"\nIngrese el valor de A: ";
    cin>>A;
    cout<<"\nIngrese el valor de B: ";
    cin>>B;
    //Proceso
    C=F_suma(A,B);
    //Salida de datos
    cout<<"\nLa suma es: "<<C;
    //Pausa
    cout<<"\n\n";
    system("pause");
    return 0;
}