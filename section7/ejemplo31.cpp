//
// Created by jonathan Panchana Rodríguez on 15/5/2025.
//

/* Algoritmo de ordenamiento de burbuja (Bubble sort)
 * Curso Software 2/2.
 */

// Bloque de declaraciones
// Librerias
#include <iostream>
using namespace std;
// // Declaración de variables
// int arreglo[100], n, aux;

const int n = 6; // Tamaño del arreglo
int arreglo[n] = {34, 12, 25, 9, 87, 55}; // Arreglo a ordenar
// Clase principal
int main() {
    cout << "Arreglo original:\n";
    for (int i = 0; i < n; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    // Algoritmo de ordenamiento Burbuja
    for (int i = 0; i < n - 1; i++) { // Se realizan n-1 pasadas
        for (int j = 0; j < n - i - 1; j++) { // Comparaciones en cada pasada
            if (arreglo[j] > arreglo[j + 1]) {
                // Intercambio de valores
                int temp = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = temp;
            }
        }
    }

    cout << "\nArreglo ordenado de menor a mayor:\n";
    for (int i = 0; i < n; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    return 0;
}
