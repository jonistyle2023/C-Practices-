//
// Created by Jonathan Panchana Rodríguez on 27/3/2025.
//

/* Descripción: Programa que muestra el modelo seguido de la marca de un automóvil.
  * Versión: 1.0
  * Lenguaje: C++
  * IDE: Clion
  * Sistema Operativo: Windows
  * Docente: Alfredo Tumbaco
  * Curso: SW 2/2 */

// Bloque de Declaraciones
// Definir librerías
#include <iostream>
#include <string>

// Librerías para usar tildes
#include <clocale>
#include <windows.h>

// espacio de nombre
using namespace std;

int main() {

    SetConsoleOutputCP(65001); // Para poder hacer uso de las tildes
    SetConsoleCP(65001);       // UTF-8 para entrada
    setlocale(LC_ALL, "es_ES.UTF-8");

    // Definimos las variables
    string marca, modelo;

    cout << "Ingrese el nombre de la marca del automóvil: ";
    cin >> marca;
    cout << "Ingrese el nombre del modelo del automóvil: ";
    cin >> modelo;

    cout << "El modelo seguido de la marca es: " << modelo << " " << marca << endl;

    return 0;
}