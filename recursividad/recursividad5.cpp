//
// Created by Jonathan Panchana Rodríguez on 11/4/2025.
//
// Programa conversor recursivo de números decimales a binarios

// Declaración de librerías necesarias
#include <iostream>

// Espacio de nombres
using namespace std;

// Función recursiva para convertir un número decimal a binario
void convertirABinario(int numero) {
    if (numero > 1) {
        convertirABinario(numero / 2); // Llamada recursiva con la división entre 2
    }
    cout << (numero % 2); // Imprimir el residuo (bit actual)
}

// Función principal
int main() {
    int numero;
    char continuar;

    do {
        cout << "Ingrese un número decimal para convertir a binario: ";
        cin >> numero;

        if (numero < 0) {
            cout << "Error: No se permiten números negativos." << endl;
        } else {
            cout << "El número " << numero << " en binario es: ";
            convertirABinario(numero);
            cout << endl;
        }

        cout << "¿Desea convertir otro número? (s/n): ";
        cin >> continuar;

    } while (continuar == 's' || continuar == 'S');

    cout << "Gracias por usar el conversor. ¡Hasta luego!" << endl;

    return 0;
}