//
// Created by jonat on 20/3/2025.
//

/* Crear un programa que permita el uso de la
 * Estructura Repetitiva do...while
 * Autor: Alfredo Tumbaco
 * Curso: SW 2/2
 * Fecha: 20/03/2025*/

// Bloque de declaraciones
#include<iostream>

// Espacio de nombre
using namespace std;
// Definir constantes y variables globales
int op;
int C;
char Rp;

// Función Principal
int main() {

    // Bloque de Instrucciones

    do {
        // Limpieza de pantalla
        system("cls");

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

        cout<<"\nDesea regresar al menu principal (S/N): ";
        cin>>Rp;
    } while(Rp=='s'||Rp=='S');

    // Pausa
    cout<<"\n\n";
    system("pause");
    return 0;

}