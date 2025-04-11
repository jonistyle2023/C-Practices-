//
// Created by Jonathan Panchana Rodríguez on 11/4/2025.
//
// Juego de adivinar el número con intentos y recursividad

// Bibliotecas necesarias
#include <iostream>
#include <cstdlib>
#include <ctime>

// Espacio de nombres
using namespace std;

// Función recursiva para manejar el juego
void adivinarNumero(int numeroSecreto, int intentos) {
    int intento;
    cout << "Adivina el número (entre 1 y 100): ";
    cin >> intento;
    // Validar la entrada
    if (intento == numeroSecreto) {
        cout << "¡Felicidades! Adivinaste el número en " << intentos << " intentos." << endl;
        return;
    } else if (intento < numeroSecreto) {
        cout << "El número secreto es mayor. Intenta de nuevo." << endl;
    } else {
        cout << "El número secreto es menor. Intenta de nuevo." << endl;
    }

    adivinarNumero(numeroSecreto, intentos + 1); // Llamada recursiva
}
// Función principal
int main() {
    srand(static_cast<unsigned>(time(0))); // Inicializar la semilla para números aleatorios
    int numeroSecreto = rand() % 100 + 1; // Generar número entre 1 y 100

    cout << "¡Bienvenido al juego de adivinar el número!" << endl;
    adivinarNumero(numeroSecreto, 1); // Iniciar el juego con el primer intento

    return 0;
}