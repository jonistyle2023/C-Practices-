//
// Created by Jonathan panchana Rodríguez on 27/3/2025.
//

/* Descripción: Programa para calcular la hipotenusa de un triángulo rectángulo
 * Versión: 1.0
 * Lenguaje: C++
 * IDE: Clion
 * Sistema Operativo: Windows 11
 * Docente: Alfredo Tumbaco
 * Curso: SW 2/2 */

// Bloque de Declaraciones
// Definir librerías
#include <iostream>
#include <cmath> // Para usar la función matemática sqrt de c++

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
    double cateto1, cateto2, hipotenusa;

    cout << "Ingrese la longitud del primer cateto: ";
    cin >> cateto1;
    cout << "Ingrese la longitud del segundo cateto: ";
    cin >> cateto2;

    hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));

    cout << "La hipotenusa del triángulo rectángulo es: " << hipotenusa << endl;

    return 0;
}
