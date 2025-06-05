//
// Created by jonathan panchana rodriguez on 5/6/2025.
//

#include <iostream>
#include <map>
#include <clocale>
#include <windows.h>

using namespace std;

// Declaración del diccionario
map<string, int> Sistema;

// Función para ingresar elementos al diccionario
void ingresarElementos() {
    int Lim, Edad;
    char Nom[30];
    cout << "Ingrese el número de elementos: ";
    cin >> Lim;
    getchar();
    for (int i = 1; i <= Lim; i++) {
        cout << "Ingrese Nombre[" << i << "]: ";
        gets(Nom);
        cout << "Ingrese Edad[" << i << "]: ";
        cin >> Edad;
        getchar();
        Sistema.insert(make_pair(Nom, Edad));
    }
}

// Función para mostrar el diccionario
void mostrarDiccionario() {
    cout << "*********************************\n";
    cout << "***** MOSTRAR DICCIONARIO *******\n";
    cout << "*********************************\n";
    for (auto it = Sistema.begin(); it != Sistema.end(); ++it) {
        cout << it->first << ":" << it->second << "\n";
    }
}

// Función para buscar un elemento por nombre
void buscarElemento() {
    char Nb[30];
    cout << "\nIngrese el nombre a buscar: ";
    gets(Nb);
    auto it = Sistema.find(Nb);
    if (it != Sistema.end()) {
        cout << "\nLa edad de " << Nb << " es: " << Sistema[Nb];
    } else {
        cout << "\nElemento no encontrado.";
    }
}

// Función para eliminar un elemento por nombre
void eliminarElemento() {
    char Nb[30];
    cout << "\nIngrese el nombre a eliminar: ";
    gets(Nb);
    Sistema.erase(Nb);
    cout << "\nElemento eliminado.";
}

// Menú principal
void mostrarMenu() {
    cout << "\n************************************" << endl;
    cout << "********** Menú de Diccionario **********" << endl;
    cout << "************************************" << endl;
    cout << "* 1. Ingresar elementos -----------*" << endl;
    cout << "* 2. Mostrar diccionario ----------*" << endl;
    cout << "* 3. Buscar elemento --------------*" << endl;
    cout << "* 4. Eliminar elemento ------------*" << endl;
    cout << "* 5. Salir ------------------------*" << endl;
    cout << "************************************" << endl;
    cout << "\nSeleccione una opción: ";
}

// Función principal
int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    setlocale(LC_ALL, "es_ES.UTF-8");

    int op;
    do {
        mostrarMenu();
        cin >> op;
        getchar(); // Limpiar el buffer
        switch (op) {
            case 1:
                ingresarElementos();
                break;
            case 2:
                mostrarDiccionario();
                break;
            case 3:
                buscarElemento();
                break;
            case 4:
                eliminarElemento();
                break;
            case 5:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opción inválida. Intente nuevamente." << endl;
        }
    } while (op != 5);

    return 0;
}