//
// Created by jonat on 14/3/2025.
//

/* Crear un programa que permita el uso de la estructura selectiva cascada
 * Autor Alfredo Tumbaco
 * Nombre: Jonathan David Panchana Rodríguez
 * Curso: SW 2/2
 * Fecha 14/03/2025*/

// Bloque de declaraciones
#include<iostream>

// Espacio de nombre
using namespace std;
// Definir constantes y variables globales
const int er1=13, er2=15, er3=26;
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

    // Proceso - Salida - estructura de control selectiva Cascada
    if(ed<er1) {
        cout<<"\n"<<nom<<" Es un N\xA4o(a).";
    } else if(ed<er2) {
        cout<<"\n"<<nom<<" Es un Adolescente.";
    } else if(ed<er2) {
        cout<<"\n"<<nom<<" Es un Joven.";
    } else {
        cout<<"\n"<<nom<<" Es un Adulto.";
    }
    // Pausa
    cout<<"\n\n";
    system("pause");
    return 0;

}