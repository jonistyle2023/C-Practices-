//
// Created by jonathan on 28/3/2025.
//

/* Lección Unidad 1 - Saldo diario entre ingresos y egresos.
 * Nombre: Jonathan David Panchana Rodríguez
 * Docente: Alfredo Tumbaco Reyes
 * Curso: SW 2/2
 * Fecha: 28/03/2025 */

// Bloque de declaraciones
// Definir librerias
#include <iostream>
#include <limits> // Necesario para limpiar buffer con numeric_limits
#include <vector> // Para almacenar y gestionar elementos
#include <string> // para cadena de caracteres

// Estas librerias son para poder hacer uso de tildes
#include <clocale>
#include <windows.h>

#include <map> // usado para resumir y agrupar gastos por categoria

// espacio de nombres
using namespace std;

struct Gasto {
    string categoria;
    double monto;
};

/* En esta ocasión, como son algunas cosas que pide, hare uso de métodos en la misma clase, antes de la función principal
 * esto con el objetivo que me facilite el cumplimiento de lo requerido en el enunciado, y crear un código simplificado
 * Además de eso no declaro variables globales, ya que no es necesario, en su lugar las ire declarando conforme a los métodos
 * que voy implementando.
 * Se que a lo mejor no cumplo con lo que se nos ha enseñado, pero basado en mi experiencia con otros lenguajes de programación,
 * es la mejor manera de hacerlo, porque no es necesario crear una clase para cada cosa. */

// Como IDE utilizo Clion

// Metodo para mostrar el menú
void mostrarMenu() {
    cout << "Menu:\n";
    cout << "1. Ingresar datos\n";
    cout << "2. Visualizar resultados\n";
    cout << "3. Salir\n";
    cout << "Seleccione una opción: ";
}

// Metodo para ingresar datos
void ingresarDatos(vector<Gasto>& gastos) {
    Gasto gasto;
    cout << "Ingrese la categoría del gasto (alimentación, transporte, entretenimiento, etc.): ";
    cin >> gasto.categoria;
    cout << "Ingrese el monto del gasto: ";
    while (!(cin >> gasto.monto) || gasto.monto < 0) {
        cout << "Monto inválido. Ingrese un monto positivo: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    gastos.push_back(gasto);
}

// Metodo para visualizar resultados
void visualizarResultados(const vector<Gasto>& gastos) {
    map<string, double> resumen;
    double totalIngresos = 0, totalGastos = 0;

    for (const auto& gasto : gastos) {
        resumen[gasto.categoria] += gasto.monto;
        totalGastos += gasto.monto;
    }

    cout << "\nResumen de gastos por categoría:\n";
    for (const auto& [categoria, monto] : resumen) {
        cout << categoria << ": $" << monto << "\n";
    }

    cout << "Total de gastos: $" << totalGastos << "\n";
    cout << "Saldo diario: $" << totalIngresos - totalGastos << "\n";
}

// Función principal
int main() {

    // Este bloque de código es mas para que el programa pueda correr en español, ya que por defecto el sistema lo toma en ingles, y mi IDE no me permite cambiarlo.
    SetConsoleOutputCP(65001); // Para poder hacer uso de las tildes
    SetConsoleCP(65001);       // UTF-8 para entrada
    setlocale(LC_ALL, "es_ES.UTF-8");

    vector<Gasto> gastos;
    int op;

    do {
        mostrarMenu();
        while (!(cin >> op) || op < 1 || op > 3) {
            cout << "Opción inválida. Seleccione una opción válida: ";
            cin.clear();
            // Esto es mas para que la entrada de datos no queden caracateres no deseados como salto de linea
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        switch (op) {
            // Aqui hago uso del switch para llamar a los métodos que he creado, se que esto es mas un concepto de programación orientada a objetos(encapsulación),
            // pero solo utilizo funciones y estructuras para organizar el código.
            case 1:
                ingresarDatos(gastos);
                break;
            case 2:
                visualizarResultados(gastos);
                break;
            case 3:
                cout << "Saliendo del programa...\n";
                break;
        }
    } while (op != 3);

    return 0;
}