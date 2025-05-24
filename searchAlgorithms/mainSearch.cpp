//
// Created by jonathan David Panchana Rodríguez on 23/5/2025.
//

/* Algoritmos de Búsqueda, este programa llama a los algoritmos de búsqueda lineal y binaria creador en clases individuales.
 * - Búsqueda Lineal (include/binary_search.cpp)
 * - Búsqueda Binaria (include/linear_search.cpp)
 */

// Bloque de declaraciones
// Librerías necesarias
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <chrono>
// Para utilizar tildes y caracteres especiales
#include <clocale> // Elimina o comenta esta línea si no compila
#include <windows.h> // Elimína o comenta esta línea si no compila
// Librerías de búsqueda
#include "linear_search.h"
#include "binary_search.h"

// Usar el espacio de nombres estándar
using namespace std;

// Genera un vector de números aleatorios entre min y max
vector<int> generateRandomData(int size, int minValue, int maxValue) {
    vector<int> data(size);
    srand(time(0));  // Semilla para que los valores cambien en cada ejecución
    for (int i = 0; i < size; ++i) {
        data[i] = minValue + rand() % (maxValue - minValue + 1);
    }
    return data;
}

// Función principal
int main() {

    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    setlocale(LC_ALL, "es_ES.UTF-8");

    const int DATA_SIZE = 10000;
    const int MIN_VALUE = 1;
    const int MAX_VALUE = 100000;

    // Generar y ordenar los datos
    vector<int> data = generateRandomData(DATA_SIZE, MIN_VALUE, MAX_VALUE);
    sort(data.begin(), data.end());  // Para que la búsqueda binaria funcione correctamente

    cout << "Seleccione el algoritmo de búsqueda:\n";
    cout << "1. Búsqueda Lineal\n";
    cout << "2. Búsqueda Binaria\n";
    cout << "Opción: ";
    int choice;
    cin >> choice;

    int target;
    cout << "Ingrese el número a buscar: ";
    cin >> target;

    bool found = false;
    auto start = chrono::high_resolution_clock::now();

    switch (choice) {
        case 1:
            found = linearSearch(data, target);
            break;
        case 2:
            found = binarySearch(data, target);
            break;
        default:
            cout << "Opción no válida.\n";
            return 1;
    }

    // Este bloque de código mide el tiempo de ejecución, con el fin de mostrar el tiempo que tarda en buscar el número y adjuntarlo
    // en la respectiva documentación
    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double, milli> duration = end - start;

    if (found) {
        cout << "El número " << target << " fue encontrado.\n";
    } else {
        cout << "El número " << target << " no fue encontrado.\n";
    }

    cout << "Tiempo de búsqueda: " << duration.count() << " ms\n";

    return 0;
}
