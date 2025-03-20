//
// Created by jonat on 20/3/2025.
//

/* Estructura Repetitiva do...while
 * Autor: Alfredo Tumbaco
 * Curso: SW 2/2
 * Fecha: 20/03/2025*/

// Bloque de declaraciones
// Definir las librerias
#include<iostream>
#include "ejemplo8.h"
// Espacio de nombre
using namespace std;
// Definir constantes y variables globales
char Rp;
int C;

// Función Principal
int main() {

    // Bloque de instrucciones
    // Inicialización de la variables
    C=0;
    // Datos de entrada
    cout<<"\n*************************";
    cout<<"\n**** REPETIR MENSAJE ****";
    cout<<"\n*************************";
    // Proceso + salida
    do {
        cout<<"\n Bienvenidos a C++";
        C++; // Incrementa de uno en uno el contador C=C+1
        cout<<"\nContador: "<<C<<endl;
        cout<<"\nDesea repetir el mensaje (S/N): ";
        cin>>Rp;
    } while(Rp=='s'||Rp=='S');
    // Pausa
    cout<<"\n\n";
    system("pause");
    return 0;

}

