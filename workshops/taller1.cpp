//
// Created by Jonathan Panchana on 3/4/2025.
//

/* Crear un programa que permita el uso de funciones y procedimientos
 * Autores: Jonathan Panchana Rodríguez - Ariel Sanchez Mite
 * curso: SW 2/2
 * fecha 3/04/2025 */

// Bloque de declaraciones
// librerias
#include <iostream>

// Espacio de nombres
using namespace std;

// Funciones
void mostrarMenu();
void registrarEntrada();

int main() {
    int opcion;
    do {
        mostrarMenu();
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                registrarEntrada();
            break;
            case 2:
                cout << "Saliendo del sistema..." << endl;
            break;
            default:
                cout << "Opción no válida. Intente de nuevo." << endl;
        }
    } while (opcion != 2);

    return 0;
}

// Procedimiento para mostrar el menú
void mostrarMenu() {
    cout << "\n********** Menú de Opciones **********" << endl;
    cout << "1. Registrar hora de entrada" << endl;
    cout << "2. Salir" << endl;
}

// Función para registrar la hora de entrada

void registrarEntrada() {
    string nombre, apellido;
    int hora;

    cout << "Ingrese su nombre: ";
    cin >> nombre;
    cout << "Ingrese su apellido: ";
    cin >> apellido;
    cout << "Ingrese la hora de entrada (hora): ";
    cin >> hora;

    cout << "Hora de entrada registrada para " << nombre << " " << apellido << ": ";
    cout << hora << ":00" << endl;
    cout << "Su entrada ha sido registrada con éxito." << endl;
}

