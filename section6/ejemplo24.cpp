//
// Created by Jonathan Panchana Rodríguez on 1/5/2025.
// Software 2/2.

// Bloque de declaraciones
// Declaramos las librerias necesarias
#include <iostream>
// Espacio entre nombres
using namespace std;
// Este programa solicita al usuario que ingrese 5 números enteros y calcula su promedio
int main() {
    const int TAMANO = 5; // Tamaño del arreglo
    int numeros[TAMANO];
    int suma = 0;

    // Solicitar al usuario que ingrese los números
    cout << "Ingrese " << TAMANO << " números:" << endl;
    for (int i = 0; i < TAMANO; i++) {
        cout << "Número " << i + 1 << ": ";
        cin >> numeros[i];
        suma += numeros[i];
    }

    // Calcular el promedio
    double promedio = static_cast<double>(suma) / TAMANO;

    // Mostrar los números ingresados y el promedio
    cout << "\nNúmeros ingresados: ";
    for (int i = 0; i < TAMANO; i++) {
        cout << numeros[i] << " ";
    }
    cout << "\nPromedio: " << promedio << endl;

    return 0;
}