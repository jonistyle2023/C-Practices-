//
// Created by Jonathan Panchana on 11/4/2025.
//
// Menú interactivo para operaciones matemáticas.

// Bloque de declaraciones
// Librerias necesarias
#include <iostream>

// Espacio entre nombres
using namespace std;

// Función para sumar dos números (paso por valor)
int sumar(int a, int b) {
    return a + b;
}

// Función para restar dos números (paso por valor)
int restar(int a, int b) {
    return a - b;
}

// Función para multiplicar dos números (paso por valor)
int multiplicar(int a, int b) {
    return a * b;
}

// Función para dividir dos números (paso por referencia)
void dividir(int a, int b, float &resultado) {
    if (b != 0) {
        resultado = static_cast<float>(a) / b;
    } else {
        cout << "Error: División por cero no permitida." << endl;
        resultado = 0;
    }
}

// Función recursiva para calcular el factorial
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

// Función recursiva para calcular la potencia
int potencia(int base, int exponente) {
    if (exponente == 0) return 1;
    return base * potencia(base, exponente - 1);
}

// Función principal
int main() {
    int op;
    do {
        // Mostrar menú
        cout << "\n********** MENU PRINCIPAL **********" << endl;
        cout << "1. Sumar" << endl;
        cout << "2. Restar" << endl;
        cout << "3. Multiplicar" << endl;
        cout << "4. Dividir" << endl;
        cout << "5. Calcular Factorial" << endl;
        cout << "6. Calcular Potencia" << endl;
        cout << "7. Salir" << endl;
        cout << "Seleccione una opción: ";
        cin >> op;

        // Variables para las operaciones
        int num1, num2;
        float resultado;

        switch (op) {
            case 1: // Sumar
                cout << "Ingrese dos números: ";
                cin >> num1 >> num2;
                cout << "Resultado: " << sumar(num1, num2) << endl;
                break;

            case 2: // Restar
                cout << "Ingrese dos números: ";
                cin >> num1 >> num2;
                cout << "Resultado: " << restar(num1, num2) << endl;
                break;

            case 3: // Multiplicar
                cout << "Ingrese dos números: ";
                cin >> num1 >> num2;
                cout << "Resultado: " << multiplicar(num1, num2) << endl;
                break;

            case 4: // Dividir
                cout << "Ingrese dos números: ";
                cin >> num1 >> num2;
                dividir(num1, num2, resultado);
                if (num2 != 0) {
                    cout << "Resultado: " << resultado << endl;
                }
                break;

            case 5: // Factorial
                cout << "Ingrese un número: ";
                cin >> num1;
                if (num1 >= 0) {
                    cout << "Resultado: " << factorial(num1) << endl;
                } else {
                    cout << "Error: El factorial no está definido para números negativos." << endl;
                }
                break;

            case 6: // Potencia
                cout << "Ingrese la base y el exponente: ";
                cin >> num1 >> num2;
                cout << "Resultado: " << potencia(num1, num2) << endl;
                break;

            case 7: // Salir
                cout << "Saliendo del programa..." << endl;
                break;

            default:
                cout << "Opción no válida. Intente de nuevo." << endl;
        }

        // Pausa antes de volver al menú
        if (op != 7) {
            cout << "\n¿Desea realizar otra operación? (1: Sí, 0: No): ";
            cin >> op;
        }

    } while (op != 0 && op != 7);

    return 0;
}

