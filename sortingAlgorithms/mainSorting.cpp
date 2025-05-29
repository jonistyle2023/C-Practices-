// mainSorting.cpp
// Created by Jonathan David Panchana Rodríguez on 23/5/2025.
//
// Programa principal para comparar algoritmos de ordenamiento
// Tarea#3: Caso de estudio de algoritmos de ordenamiento y búsqueda
// Fundamentos de programación, carrera de software de la Universidad Estatal Península de Santa Elena

// Este programa permite al usuario elegir un algoritmo de ordenamiento y medir su tiempo de ejecución
// También incluye una función de búsqueda binaria para encontrar un número en el arreglo ordenado
// Bloque de declaraciones
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <algorithm>
// Para utilizar tildes y caracteres especiales
#include <clocale> // Elimina o comenta esta línea si no compila
#include <windows.h> // Elimína o comenta esta línea si no compila

// Inclusión de headers de algoritmos, necesarias para realizar llamadas a los algoritmos de ordenamiento
#include "bubble_sort.h"
#include "selection_sort.h"
#include "insertion_sort.h"
#include "quicksort.h"
#include "mergesort.h"

// Usar el espacio de nombres estándar
using namespace std;
// Usar el espacio de nombres estándar para la biblioteca de tiempo
using namespace std::chrono;

// Función para generar datos aleatorios
vector<int> generateRandomData(int size, int minValue, int maxValue) {
    vector<int> data(size);
    srand(time(0));
    for (int i = 0; i < size; i++) {
        data[i] = minValue + rand() % (maxValue - minValue + 1);
    }
    return data;
}

// Búsqueda binaria para encontrar un número en el arreglo
bool binarySearch(const vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) return true;
        else if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return false;
}

int main() {

    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    setlocale(LC_ALL, "es_ES.UTF-8");

    const int DATA_SIZE = 10000;
    vector<int> data = generateRandomData(DATA_SIZE, 1, 100000);

    cout << "Seleccione el algoritmo de ordenamiento:\n";
    cout << "1. Burbuja\n";
    cout << "2. Selección\n";
    cout << "3. Inserción\n";
    cout << "4. Quicksort\n";
    cout << "5. Mergesort\n";
    cout << "Opción: ";
    int choice;
    cin >> choice;

    // Copia del vector original para evitar modificar el original
    vector<int> arr = data;

    // Medición de tiempo, para capturar el tiempo de ejecución y documentarlo de acuerdo a la opción elegida
    auto start = high_resolution_clock::now();

    switch (choice) {
        case 1:
            bubbleSort(arr);
            cout << "Ordenado con Burbuja.\n";
            break;
        case 2:
            selectionSort(arr);
            cout << "Ordenado con Selección.\n";
            break;
        case 3:
            insertionSort(arr);
            cout << "Ordenado con Inserción.\n";
            break;
        case 4:
            quickSort(arr, 0, arr.size() - 1);
            cout << "Ordenado con Quicksort.\n";
            break;
        case 5:
            mergeSort(arr, 0, arr.size() - 1);
            cout << "Ordenado con Mergesort.\n";
            break;
        default:
            cout << "Opción inválida.\n";
            return 1;
    }

    auto end = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(end - start);
    cout << "Tiempo de ejecución: " << duration.count() << " ms\n";

    // Solicitar al usuario un número para buscar
    int target;
    cout << "Ingrese un número para buscar: ";
    cin >> target;

    if (binarySearch(arr, target)) {
        cout << "El número " << target << " fue encontrado en el arreglo.\n";
    } else {
        cout << "El número " << target << " NO se encuentra en el arreglo.\n";
    }

    return 0;
}