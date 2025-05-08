//
// Created by Jonathan Panchana Rodríguez on 1/5/2025.
//
// Bloque de declaraciones
// Declaramos las librerias necesarias
#include <iostream>
// Espacio entre nombres
using namespace std;
// Ejemplo de matrices usando arreglos
int main() {
    const int FILAS = 3; // Número de filas
    const int COLUMNAS = 4; // Número de columnas
    int matriz[FILAS][COLUMNAS];

    // Solicitar al usuario que ingrese los valores de la matriz
    cout << "Ingrese los valores para una matriz de " << FILAS << "x" << COLUMNAS << ":" << endl;
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    // Mostrar la matriz ingresada
    cout << "\nMatriz ingresada:" << endl;
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
