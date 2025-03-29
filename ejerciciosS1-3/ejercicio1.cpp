//
// Created by Jonathan Panchana Rodríguez on 27/3/2025.
//

/* Descripción: Programa que determina el mayor de 3 números enteros.
 * Docente: Alfredo Tumbaco
 * Curso: SW 2/2 */

// Bloque de Declaraciones
// Definir librerías
# include <iostream>

// Librerías para usar tildes
# include <clocale>
# include <windows.h>

// Espacio de nombre
using namespace std;

int main() {

    SetConsoleOutputCP(65001); // Para poder hacer uso de las tildes
    SetConsoleCP(65001);       // UTF-8 para entrada
    setlocale(LC_ALL, "es_ES.UTF-8");

    int num1, num2, num3;

    cout<<"Ingrese el primer numero:";
    cin>>num1;
    cout<<"Ingrese el segundo numero:";
    cin>>num2;
    cout<<"Ingrese el tercer numero:";
    cin>>num3;

    int mayor = num1;

    if (num2 > mayor) {
        mayor = num2;
    }
    if (num3 > mayor) {
        mayor = num3;
    }

    cout<< "El mayor de los tres números es: " << mayor << endl;

    return 0;
}
