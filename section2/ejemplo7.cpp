//
// Created by jonat on 14/3/2025.
//

/* Crear un programa que permita el uso de la estructura selectiva Múltiple
 * Autor Alfredo Tumbaco
 * Nombre: Jonathan David Panchana Rodríguez
 * Curso: SW 2/2
 * Fecha 14/03/2025*/

// Bloque de declaraciones
#include<iostream>

// Espacio de nombre
using namespace std;
// Definir constantes y variables globales
int op;

// Función Principal
int main() {

    // Bloque de Instrucciones
    // Datos de entrada
    cout<<"\n*****************************";
    cout<<"\n*********** MENU ************";
    cout<<"\n*****************************";
    cout<<"\n1. Ingreso.";
    cout<<"\n2. Proceso.";
    cout<<"\n3. Salida.";
    cout<<"\n*****************************";
    cout<<"\nDigite el n\243mero de la opci\242n a utilizar: ";
    cin>>op;

    // Proceso + Salida (Selectiva Múltiple)
    switch(op) {
        case 1: {
            cout<<"\nIngreso de Datos";
            break;
        }
        case 2: {
            cout<<"\nProceso de Datos";
            break;
        }
        case 3: {
            cout<<"\nSalida de Datos";
            break;
        }
    }

    // Pausa
    cout<<"\n\n";
    system("pause");
    return 0;

}


