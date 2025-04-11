//
// Created by Jonathan Panchana Rodríguez on 11/4/2025.
//
// Programa verificador de número palíndromo usando recursión (más funciones de cadena)

// Bibliotecas
#include <iostream>
#include <string>

// Espacio de nombres
using namespace std;

// Función recursiva para verificar si una cadena es un palíndromo
bool esPalindromoRecursivo(const string &cadena, int inicio, int fin) {
    if (inicio >= fin) {
        return true; // Caso base: los extremos se encuentran o cruzan
    }
    if (cadena[inicio] != cadena[fin]) {
        return false; // Si los caracteres no coinciden, no es un palíndromo
    }
    return esPalindromoRecursivo(cadena, inicio + 1, fin - 1); // Llamada recursiva
}

int main() {
    string entrada;
    int contadorPalindromos = 0; // Contador de palíndromos ingresados
    char continuar;

    do {
        cout << "Ingrese una cadena o número: ";
        cin >> entrada;

        // Verificar si la entrada es un palíndromo
        if (esPalindromoRecursivo(entrada, 0, entrada.length() - 1)) {
            cout << "La entrada \"" << entrada << "\" es un palíndromo." << endl;
            contadorPalindromos++;
        } else {
            cout << "La entrada \"" << entrada << "\" no es un palíndromo." << endl;
        }

        cout << "¿Desea verificar otra entrada? (s/n): ";
        cin >> continuar;

    } while (continuar == 's' || continuar == 'S');

    cout << "Total de palíndromos ingresados: " << contadorPalindromos << endl;

    return 0;
}