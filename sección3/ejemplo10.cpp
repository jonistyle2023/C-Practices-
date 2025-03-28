//
// Created by jonat on 20/3/2025.
//

/* Crear un programa que permita el uso de la
 * Estructura Repetitiva While
 * Autor: Alfredo Tumbaco
 * Nombre: Jonathan Panchana Rodríguez
 * Curso: SW 2/2
 * Fecha: 20/03/2025*/

// Bloque de declaraciones
#include<iostream>
// Espacio de nombres
using namespace std;
// Definir constantes y variables globales
const float A=5, B=7;
float X, Y;
int LimInf, LimSup;

// Función principal

int main() {

    // Bloque de instrucciones
    // Inicialización de variables
    X=0;
    Y=0;
    // Datos de entrada
    cout<<"\n*************************";
    cout<<"\n******* f(x)=ax+b *******";
    cout<<"\n*************************";
    cout<<"\nIngrese el limite inferior: ";
    cin>>LimInf;
    cout<<"\nIngrese el limite superior: ";
    cin>>LimSup;

    // Proceso
    X=LimInf;
    while(X<=LimSup) {
        Y=(A*X)+B;
        cout<<"\nf("<<X<<")="<<Y;
        X++;
    }

    // Pausa
    cout<<"\n\n";
    system("pause");
    return 0;

}