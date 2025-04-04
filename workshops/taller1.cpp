/* Enunciado: Crear un programa que permita el uso de funciones y procedimientos: En este caso crearemos un programa que permita registrar
 * la entrada y salida de los empleados de una empresa. El programa debe permitir registrar la hora de entrada y salida de los empleados, así como mostrar
 * datos ingresados por el usuario para validar la entrada de datos.*/

/* Autores: Jonathan Panchana Rodríguez - Ariel Sanchez Mite
 * curso: SW 2/2
 * fecha 3/04/2025 */

// Bloque de declaraciones
// librerias
#include <iostream>
#include <clocale>
#include <windows.h>

// Espacio de nombres
using namespace std;

// Funciones
void mostrarMenu();
void registrarEntrada();
void registrarSalida();

int main() {

    SetConsoleOutputCP(65001); // Para poder hacer uso de las tildes
    SetConsoleCP(65001);       // UTF-8 para entrada
    setlocale(LC_ALL, "es_ES.UTF-8");

    int op;
    do {
        mostrarMenu();
        cout << "Seleccione una opción: ";
        cin >> op;

        switch (op) {
            case 1:
                registrarEntrada();
            break;
            case 2:
                registrarSalida();
            break;
            case 3:
                cout << "Saliendo del sistema..." << endl;
            break;
            default:
                cout << "Opción no válida. Intente de nuevo." << endl;
        }
    } while (op != 3);

    return 0;
}

// Procedimiento para mostrar el menú
void mostrarMenu() {
    cout << "\n********** Menú de Opciones **********" << endl;
    cout << "1. Registrar hora de entrada" << endl;
    cout << "2. Registrar hora de salida" << endl;
    cout << "3. Salir" << endl;
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

// Función para registrar la hora de salida
void registrarSalida() {
    string nombre, apellido;
    int hora;
    cout << "Ingrese su nombre: ";
    cin >> nombre;
    cout << "Ingrese su apellido: ";
    cin >> apellido;
    cout << "Ingrese la hora de salida (hora): ";
    cin >> hora;
    cout << "Hora de salida registrada para " << nombre << " " << apellido << ": ";
    cout << hora << ":00" << endl;
    cout << "Su salida ha sido registrada con éxito." << endl;
}

