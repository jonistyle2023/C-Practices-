//
// Created by jonathan panchana on 8/5/2025.
//
/* Arreglos Bidimensionales
 * Autor: Jonathan Panchana Rodríguez
 * Curso: Programación ISoftware 2/2 */

// Bloque de declaraciones
// Definición de las librerias
#include <iostream>
// Espacio de Nombres
using namespace std;
// Definición de variables globales
int Matriz[30][30], i, j, LimF, LimC, Ac;

// Bloque de instrucciones
// Función principal
int main() {
    // Inicialización de datos
    i=0;
    j=0;
    Ac=0;
    //Datos de entrada
    cout << "\n***************************";
    cout << "\n**** ARREGLOS (VECTOR) ****";
    cout << "\n***************************";
    cout << "\nIngrese numero de filas: ";
    cin>>LimF;
    cout << "\nIngrese numero de columnas: ";
    cin>>LimC;

    // Proceso
    // Ingreso de datos al la matriz
    for (i=1; i<=LimC; i++) {
        for (j=1; j<=LimC; j++) {
            cout << "\nIngrese el elemento [" << i << "][" << j << "]: ";
            cin >> Matriz[i][j];
        }
        // cout << "\nIngrese el elemento [" << i << "]: ";
        // cin >> Vector[i];
    }
    // Procesos Generales
    for (i=1; i<=LimF; i++) {
        // Suma de los elementos de la matriz
        for (j=1; j<=LimC; j++) {
            Ac+=Matriz[i][j];
        }
    }
    // Datos de salida
    cout << "\nLa suma de los elementos es: " << Ac;
    cout << "\n\n";
    system("pause");
    return 0;
}