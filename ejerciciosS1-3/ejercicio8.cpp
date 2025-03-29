//
// Created by Jonathan Panchana Rodríguez on 27/3/2025.
//

/* Descripción: Programa para calcular el área y el perímetro de un triángulo.
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

// Métdodo para calcular el área de un triángulo usando la fórmula de Herón
void calcularArea(double a, double b, double c) {
    double semiperimetro = (a + b + c) / 2;
    double area = sqrt(semiperimetro * (semiperimetro - a) * (semiperimetro - b) * (semiperimetro - c));
    cout << "El área del triángulo es: " << area << endl;
}

// Método para calcular el perímetro de un triángulo
void calcularPerimetro(double a, double b, double c) {
    double perimetro = a + b + c;
    cout << "El perímetro del triángulo es: " << perimetro << endl;
}

int main() {

    SetConsoleOutputCP(65001); // Para poder hacer uso de las tildes
    SetConsoleCP(65001);       // UTF-8 para entrada
    setlocale(LC_ALL, "es_ES.UTF-8");

    int opcion;
    double a, b, c;

    do {
        cout << "Menú de opciones:" << endl;
        cout << "1. Calcular área del triángulo" << endl;
        cout << "2. Calcular perímetro del triángulo" << endl;
        cout << "3. Salir" << endl;
        cout << "Ingrese una opción: ";
        cin >> opcion;

        if (opcion == 1 || opcion == 2) {
            cout << "Ingrese la longitud del primer lado: ";
            cin >> a;
            cout << "Ingrese la longitud del segundo lado: ";
            cin >> b;
            cout << "Ingrese la longitud del tercer lado: ";
            cin >> c;
        }

        switch (opcion) {
            case 1:
                calcularArea(a, b, c);
            break;
            case 2:
                calcularPerimetro(a, b, c);
            break;
            case 3:
                cout << "Saliendo del programa..." << endl;
            break;
            default:
                cout << "Opción no válida. Intente de nuevo." << endl;
        }
    } while (opcion != 3);

    return 0;
}
