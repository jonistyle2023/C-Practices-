//
// Created by Jonathan Panchana Rodriguez on 4/4/2025.
//

/* Enunciado: Crear un programa en C++ que permita ingresar funciones y procedimientos con paso de parámetros, utilice
 * estructuras de control con referencia al estilo C++, adicional debe verse reflejado lo visto en ejercicios anteriores.

/* Taller 2 - IDEA PRINCIPAL: Calculadora interactiva para operaciones aritmetica básica y conversión de unidades
 * Autor: Jonathan Panchana Rodríguez
 * curso: SW 2/2
 * fecha 3/04/2025 */

// Bloque de declaraciones
// librerias
#include <iostream>
#include <clocale>
#include <windows.h>

// Espacio entre nombres
using namespace std;

// FUNCIONES A UTILIZAR
void mostrarMenu();
void realizarOperacionMatematica();
void convertirUnidades();
void convertirTemperatura(float &celsius, float &fahrenheit);
void convertirLongitud(float &metros, float &pulgadas);

int main() {

    SetConsoleOutputCP(65001); // Para poder hacer uso de las tildes
    SetConsoleCP(65001);       // UTF-8 para entrada
    setlocale(LC_ALL, "es_ES.UTF-8");

    int op;
    do {
        mostrarMenu();
        cout << "Seleccione una opción: ";
        cin >> op;

        switch (op) {
            case 1:
                realizarOperacionMatematica();
                break;
            case 2:
                convertirUnidades();
                break;
            case 3:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opción no válida. Intente de nuevo." << endl;
        }
    } while (op != 3);

    return 0;
}

void mostrarMenu() {
    cout << "\n********** Menú Principal **********" << endl;
    cout << "1. Realizar operación matemática" << endl;
    cout << "2. Convertir unidades" << endl;
    cout << "3. Salir" << endl;
}

void realizarOperacionMatematica() {
    float num1, num2, resultado;
    char operacion;

    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;
    cout << "Ingrese la operación, solo el signo (Suma+, Resta-, Multiplicación*, División/): ";
    cin >> operacion;

    switch (operacion) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
            } else {
                cout << "Error: División por cero." << endl;
                return;
            }
            break;
        default:
            cout << "Operación no válida." << endl;
            return;
    }

    cout << "El resultado es: " << resultado << endl;
}

void convertirUnidades() {
    int op;
    float celsius, fahrenheit, metros, pulgadas;

    cout << "\n********** Conversión de Unidades **********" << endl;
    cout << "1. Convertir temperatura (Celsius a Fahrenheit)" << endl;
    cout << "2. Convertir longitud (Metros a Pulgadas)" << endl;
    cout << "Seleccione una opción: ";
    cin >> op;

    switch (op) {
        case 1:
            cout << "Ingrese la temperatura en Celsius: ";
            cin >> celsius;
            convertirTemperatura(celsius, fahrenheit);
            cout << "La temperatura en Fahrenheit es: " << fahrenheit << endl;
            break;
        case 2:
            cout << "Ingrese la longitud en metros: ";
            cin >> metros;
            convertirLongitud(metros, pulgadas);
            cout << "La longitud en pulgadas es: " << pulgadas << endl;
            break;
        default:
            cout << "Opción no válida." << endl;
    }
}

void convertirTemperatura(float &celsius, float &fahrenheit) {
    fahrenheit = (celsius * 9/5) + 32;
}

void convertirLongitud(float &metros, float &pulgadas) {
    pulgadas = metros * 39.3701;
}
