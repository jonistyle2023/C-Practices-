//
// Created by jonathan panchana rodríguez on 30/5/2025.
//

// Lección 2: Estructuras y funciones en C++
/* Descripción: Este programa genera la nómina de empleados del IESS, permitiendo ingresar, registrar empleados y calcular el sueldo neto de cada uno.
 * Curso: Software 2/2
 * Docente: Ing. Alfredo Tumbaco Msci.
 */

// Bloque de declaraciones
// Incluir las librerías necesarias
#include <algorithm>
#include <iostream>
#include <string>
#include <cctype>

// Librerias para hacer uso de las tildes
#include <clocale>
#include <windows.h>

// Espacio entre nombres
using namespace std;

// Estructura para almacenar información de los empleados (Lo vimos en la clase de ayer)
struct Empleado {
    string nombre;
    string cedula;
    double sueldoBruto;
    double sueldoNeto;
};

// Declaración previa de funciones
void mostrarMenu();
void ingresarEmpleados(Empleado empleados[], int &cantidad);
void calcularSueldosNetos(Empleado empleados[], int cantidad);
void mostrarEmpleados(const Empleado empleados[], int cantidad);
double calcularDescuentoIESS(double sueldoBruto);
bool validarNombre(const string &nombre);
bool validarCedula(const string &cedula);
bool validarSueldoBruto(double sueldoBruto);

// Función principal
int main() {

    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    setlocale(LC_ALL, "es_ES.UTF-8");

    const int MAX_EMPLEADOS = 100;
    Empleado empleados[MAX_EMPLEADOS];
    int cantidad = 0;
    int op;

    do {
        mostrarMenu();
        cin >> op;

        switch (op) {
            case 1:
                ingresarEmpleados(empleados, cantidad);
                break;
            case 2:
                calcularSueldosNetos(empleados, cantidad);
                break;
            case 3:
                mostrarEmpleados(empleados, cantidad);
                break;
            case 4:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opción inválida. Intente nuevamente." << endl;
        }
    } while (op != 4);

    return 0;
}

// Función para mostrar el menú
void mostrarMenu() {
    cout << "\n************************************" << endl;
    cout << "********** Menú de Nómina **********" << endl;
    cout << "************************************" << endl;
    cout << "* 1. Ingresar empleados -----------*" << endl;
    cout << "* 2. Calcular sueldos netos -------*" << endl;
    cout << "* 3. Mostrar empleados ------------*" << endl;
    cout << "* 4. Salir ------------------------*" << endl;
    cout << "************************************" << endl;
    cout << "\nSeleccione una opción: ";
}

// Función para ingresar empleados
void ingresarEmpleados(Empleado empleados[], int &cantidad) {
    int numEmpleados;
    cout << "Ingrese la cantidad de empleados a registrar: ";
    cin >> numEmpleados;

    for (int i = 0; i < numEmpleados; ++i) {
        Empleado empleado;
        cout << "\nEmpleado #" << (cantidad + 1) << endl;

        // Validación del nombre
        do {
            cout << "Nombre: ";
            cin.ignore();
            getline(cin, empleado.nombre);
            if (!validarNombre(empleado.nombre)) {
                cout << "Nombre inválido. Intente nuevamente." << endl;
            }
        } while (!validarNombre(empleado.nombre));

        // Validación de la cédula
        do {
            cout << "Cédula: ";
            cin >> empleado.cedula;
            if (!validarCedula(empleado.cedula)) {
                cout << "Cédula inválida. Intente nuevamente." << endl;
            }
        } while (!validarCedula(empleado.cedula));

        // Validación del sueldo bruto
        do {
            cout << "Sueldo bruto: ";
            cin >> empleado.sueldoBruto;
            if (!validarSueldoBruto(empleado.sueldoBruto)) {
                cout << "Sueldo bruto inválido. Intente nuevamente." << endl;
            }
        } while (!validarSueldoBruto(empleado.sueldoBruto));
        // Inicializar sueldo neto a 0 (en lugar de i++)
        empleados[cantidad++] = empleado;
    }
}

// Función para calcular sueldos netos
void calcularSueldosNetos(Empleado empleados[], int cantidad) {
    for (int i = 0; i < cantidad; ++i) {
        empleados[i].sueldoNeto = empleados[i].sueldoBruto - calcularDescuentoIESS(empleados[i].sueldoBruto);
    }
    cout << "Cálculo de sueldos netos completado." << endl;
}

// Función para mostrar empleados
void mostrarEmpleados(const Empleado empleados[], int cantidad) {
    cout << "\n--- Lista de Empleados ---" << endl;
    for (int i = 0; i < cantidad; ++i) {
        cout << "Empleado #" << (i + 1) << endl;
        cout << "Nombre: " << empleados[i].nombre << endl;
        cout << "Cédula: " << empleados[i].cedula << endl;
        cout << "Sueldo bruto: $" << empleados[i].sueldoBruto << endl;
        cout << "Sueldo neto: $" << empleados[i].sueldoNeto << endl;
        cout << "--------------------------" << endl;
    }
}

// Función para calcular el descuento del IESS
double calcularDescuentoIESS(double sueldoBruto) {
    return sueldoBruto * 0.0945;
}

// Validación del nombre
bool validarNombre(const string &nombre) {
    if (nombre.empty()) return false;
    for (char c : nombre) {
        if (!isalpha(c) && c != ' ') return false;
    }
    return true;
}

// Validación de la cédula
bool validarCedula(const string &cedula) {
    return cedula.length() == 10 && all_of(cedula.begin(), cedula.end(), ::isdigit);
}

// Validación del sueldo bruto
bool validarSueldoBruto(double sueldoBruto) {
    return sueldoBruto > 0;
}