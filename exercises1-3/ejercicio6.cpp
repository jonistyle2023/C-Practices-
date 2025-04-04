//
// Created by Jonathan Panchana Rodríguez on 27/3/2025.
//

/* Descripción: Programa para convertir metros a pies y pulgadas.
  * Versión: 1.0
  * Lenguaje: C++
  * IDE: Clion
  * Sistema Operativo: Windows 11
  * Docente: Alfredo Tumbaco
  * Curso: SW 2/2 */

// Bloque de Declaraciones
// Definir librerías
#include <iostream>

// Librerías para usar tildes
#include <clocale>
#include <windows.h>

// Espacio de nombre
using namespace std;

int main() {

    SetConsoleOutputCP(65001); // Para poder hacer uso de las tildes
    SetConsoleCP(65001);       // UTF-8 para entrada
    setlocale(LC_ALL, "es_ES.UTF-8");

    double metros, pulgadas, pies;
    int piesEnteros;
    double pulgadasRestantes;

    cout << "Ingrese la cantidad de metros: ";
    cin >> metros;

    // Convertir metros a pulgadas
    pulgadas = metros * 39.37;

    // Convertir pulgadas a pies y pulgadas restantes
    piesEnteros = static_cast<int>(pulgadas / 12);
    pulgadasRestantes = pulgadas - (piesEnteros * 12);

    cout << metros << " metros son " << piesEnteros << " pies y " << pulgadasRestantes << " pulgadas." << endl;

    return 0;
}

