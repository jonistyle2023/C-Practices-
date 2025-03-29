//
// Created by Jonathan Panchana on 27/3/2025.
//

/* Descripción: Programa para calcular la superficie de un círculo.
  * Estudiante: Jonathan Panchana Rodríguez
  * Fecha: 27/03/2025
  * Versión: 1.0
  * Lenguaje: C++
  * IDE: Clion
  * Sistema Operativo: Windows
  * Docente: Alfredo Tumbaco
  * * Curso: SW 2/2 */

// Bloque de Declaraciones
// Definir librerías
#include <iostream>

// Librerías para usar tildes
# include <clocale>
# include <windows.h>

// Espacio de nombre
using namespace std;

int main() {

  SetConsoleOutputCP(65001); // Para poder hacer uso de las tildes
  SetConsoleCP(65001);       // UTF-8 para entrada
  setlocale(LC_ALL, "es_ES.UTF-8");

  const double PI = 3.14159265358979323846;
  double radio, superficie;

    cout << "Ingrese el radio del círculo: ";
    cin >> radio;

    superficie = PI * radio * radio;
    cout << "La superficie del círculo es: " << superficie << endl;

    return 0;
}