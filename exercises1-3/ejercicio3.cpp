//
// Created by jonathan panchana  on 27/3/2025.
//

/* Descripción: Programa para calcular el perímetro y la superficie de un rectángulo.
  * Estudiante: Jonathan Panchana Rodríguez
  * Fecha: 27/03/2025
  * Versión: 1.0
  * Lenguaje: C++
  * IDE: Clion
  * Sistema Operativo: Windows
  * Docente: Alfredo Tumbaco
  * Curso: SW 2/2 */

// Bloque de Declaraciones
// Definir librerías
# include <iostream>

// Librerías para usar tildes
# include <clocale>
# include <windows.h>

// espacio de nombre
using namespace std;

int main() {

    SetConsoleOutputCP(65001); // Para poder hacer uso de las tildes
    SetConsoleCP(65001);       // UTF-8 para entrada
    setlocale(LC_ALL, "es_ES.UTF-8");

    double base, altura, perimetro, superficie;

    cout << "Ingrese la base del rectángulo: ";
    cin >> base;
    cout << "Ingrese la altura del rectángulo: ";
    cin >> altura;

    perimetro = 2 * (base + altura);
    superficie = base * altura;

    cout << "El perímetro del rectángulo es: " << perimetro << endl;
    cout << "La superficie del rectángulo es: " << superficie << endl;

    return 0;
}
