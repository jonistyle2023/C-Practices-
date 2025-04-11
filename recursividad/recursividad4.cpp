//
// Created by Jonathan David Panchana Rodríguez on 11/4/2025.
//
// Generador de la serie Fibonacci hasta un límite definido por el usuario, similar al hecho en clase

// Bloque de declaraciones
// Librerías necesarias
#include <iostream>

// Espacio entre nombres
using namespace std;

// Función recursiva para calcular el término n de la serie de Fibonacci
int fibonacci(int n) {
    if (n <= 1) {
        return n; // Caso base: Fibonacci(0) = 0, Fibonacci(1) = 1
    }
    return fibonacci(n - 1) + fibonacci(n - 2); // Llamada recursiva
}

int main() {
    int limite;

    // Solicitar al usuario el límite de términos
    cout << "Ingrese el número de términos de la serie de Fibonacci que desea ver: ";
    cin >> limite;

    // Validar que el límite no sea negativo
    if (limite < 0) {
        cout << "Error: No se permiten números negativos." << endl;
        return 1; // Salir del programa
    }

    // Mostrar la serie de Fibonacci
    cout << "Serie de Fibonacci hasta " << limite << " términos:" << endl;
    for (int i = 0; i < limite; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;

    return 0;
}