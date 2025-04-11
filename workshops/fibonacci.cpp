//
// Created by jonat on 11/4/2025.
//

#include <iostream>
using namespace std;

// Función recursiva para calcular el n-ésimo número de Fibonacci
int fibonacciRecursivo(int n) {
    if (n <= 1)
        return n;
    return fibonacciRecursivo(n - 1) + fibonacciRecursivo(n - 2);
}

// Función iterativa para calcular el n-ésimo número de Fibonacci
int fibonacciIterativo(int n) {
    if (n <= 1)
        return n;
    int a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int opcion, n;

    do {
        // Mostrar menú de opciones
        cout << "\nSelecciona una opción:\n";
        cout << "1. Calcular Fibonacci Recursivo\n";
        cout << "2. Calcular Fibonacci Iterativo\n";
        cout << "3. Salir\n";
        cout << "Opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                // Calcular Fibonacci de forma recursiva
                    cout << "Ingresa el número de términos: ";
            cin >> n;
            cout << "Serie Fibonacci (Recursivo): ";
            for (int i = 0; i < n; i++) {
                cout << fibonacciRecursivo(i) << " ";
            }
            cout << endl;
            break;

            case 2:
                // Calcular Fibonacci de forma iterativa
                    cout << "Ingresa el número de términos: ";
            cin >> n;
            cout << "Serie Fibonacci (Iterativo): ";
            for (int i = 0; i < n; i++) {
                cout << fibonacciIterativo(i) << " ";
            }
            cout << endl;
            break;

            case 3:
                // Salir
                    cout << "Saliendo del programa...\n";
            break;

            default:
                cout << "Opción no válida. Intenta de nuevo.\n";
            break;
        }

    } while (opcion != 3);

    return 0;
}

