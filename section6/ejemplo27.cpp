//
// Created by jonathan panchana on 8/5/2025.
//
/* Arreglos unidimensionales
 * Autor: Jonathan Panchana Rodríguez
 * Curso: Programación ISoftware 2/2 */

// Bloque de declaraciones
// Definición de las librerias
#include <iostream>
// Espacio de Nombres
using namespace std;
// Definición de variables globales
int Vector[30], i, Lim, Ac;

// Bloque de instrucciones
// Función principal
int main() {
    // Inicialización de datos
    i=0;
    Ac=0;
    //Datos de entrada
    cout << "\n***************************";
    cout << "\n**** ARREGLOS (VECTOR) ****";
    cout << "\n***************************";
    cout << "\nIngrese la cantidad de elementos: ";
    cin>>Lim;
    // Proceso
    // Ingreso de datos al vector
    for (i=1; i<=Lim; i++) {
        cout << "\nIngrese el elemento [" << i << "]: ";
        cin >> Vector[i];
    }
    for (i=1; i<=Lim; i++) {
        // Suma de los elementos del vector
        Ac+=Vector[i];
    }
    // Datos de salida
    cout << "\nLa suma de los elementos es: " << Ac;
    cout << "\n\n";
    system("pause");
    return 0;
}