//
// Created by Jonathan Panchana Rodríguez on 1/5/2025.
//

// Bloque de declaraciones
#include <iostream>
// Espacio entre nombres
using namespace std;

int main() {
    const int PROFUNDIDAD = 2; // Número de capas
    const int FILAS = 3;       // Número de filas
    const int COLUMNAS = 4;    // Número de columnas
    int matriz[PROFUNDIDAD][FILAS][COLUMNAS];

    // Solicitar al usuario que ingrese los valores de la matriz tridimensional
    cout << "Ingrese los valores para una matriz de " << PROFUNDIDAD << "x" << FILAS << "x" << COLUMNAS << ":" << endl;
    for (int k = 0; k < PROFUNDIDAD; k++) {
        cout << "Capa " << k + 1 << ":" << endl;
        for (int i = 0; i < FILAS; i++) {
            for (int j = 0; j < COLUMNAS; j++) {
                cout << "Elemento [" << k << "][" << i << "][" << j << "]: ";
                cin >> matriz[k][i][j];
            }
        }
    }

    // Mostrar la matriz tridimensional ingresada
    cout << "\nMatriz tridimensional ingresada:" << endl;
    for (int k = 0; k < PROFUNDIDAD; k++) {
        cout << "Capa " << k + 1 << ":" << endl;
        for (int i = 0; i < FILAS; i++) {
            for (int j = 0; j < COLUMNAS; j++) {
                cout << matriz[k][i][j] << "\t";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}