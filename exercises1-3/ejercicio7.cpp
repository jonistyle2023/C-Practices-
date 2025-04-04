//
// Created by jonathan panchana on 27/3/2025.
//

/* Descripción: Programa para calcular el área de un triángulo usando la fórmula de Herón.
  * Versión: 1.0
  * Lenguaje: C++
  * IDE: Clion
  * Sistema Operativo: Windows 11
  * Docente: Alfredo Tumbaco
  * Curso: SW 2/2 */

// Bloque de Declaraciones
// Definir librerías
#include <iostream>
#include <cmath> // Para usar las funciones sqrt y pow

// Librerías para usar tildes
#include <clocale>
#include <windows.h>

// Espacio de nombre
using namespace std;

int main() {

    SetConsoleOutputCP(65001); // Para poder hacer uso de las tildes
    SetConsoleCP(65001);       // UTF-8 para entrada
    setlocale(LC_ALL, "es_ES.UTF-8");

    // Definimos las variables
    double lado1, lado2, lado3, semiperimetro, area;

    cout << "Ingrese la longitud del primer lado: ";
    cin >> lado1;
    cout << "Ingrese la longitud del segundo lado: ";
    cin >> lado2;
    cout << "Ingrese la longitud del tercer lado: ";
    cin >> lado3;

    // Proceso que calcula el semiperímetro
    semiperimetro = (lado1 + lado2 + lado3) / 2;

    // Proceso que calcula el área usando la fórmula de Herón
    area = sqrt(semiperimetro * (semiperimetro - lado1) * (semiperimetro - lado2) * (semiperimetro - lado3));

    cout << "El área del triángulo es: " << area << endl;

    return 0;
}
