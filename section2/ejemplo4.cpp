//
// Created by jonat on 14/3/2025.
//

/* Crear un programa que permita el uso de la estructura selectiva simple
 * Autor Alfredo Tumbaco
 * Nombre: Jonathan David Panchana Rodríguez
 * Curso: SW 2/2
 * Fecha 14/03/2025*/

// Bloque de Declaraciones
#include<iostream>

// Espacio de nombre
using namespace std;
// Definir constantes y variables globales
const int er=18;
int ed;
char nom[30];

// Función Principal
int main() {

    // Bloque de instrucciones
    // Datos de entrada
    cout<<"\n*****************************";
    cout<<"\n*********** EDAD ************";
    cout<<"\n*****************************";
    cout<<"\nIngrese el Nombre: ";
    gets(nom);
    cout<<"\nIngrese la Edad: ";
    cin>>ed;

    // Proceso - Salida - estructura de control selectiva
    if(ed>=er) {
        cout<<"\n"<<nom<<" Es mayor de edad.";
    }
    // Pausa
    cout<<"\n\n";
    system("pause");
    return 0;

}
