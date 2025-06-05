//
// Created by Jonathan David Panchana Rodríguez on 5/6/2025.
//
// Programa que hace uso de archivos para almacenar, mostrar, buscar y eliminar registros de personas.
// Curso: Software 2/2

// Bloque de declaraciones
// Declaración de librerías
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
// Espacio de nombres
using namespace std;

// Función para crear el archivo y agregar datos
void crearArchivo(const string &ruta) {
    ofstream archivo(ruta, ios::app);
    if (!archivo) {
        cout << "Error al crear el archivo.\n";
        return;
    }
    int lim;
    cout << "Ingrese cantidad de personas: ";
    cin >> lim;
    cin.ignore();
    for (int i = 1; i <= lim; i++) {
        string nombre, apellido;
        int edad;
        cout << "\nIngrese el nombre " << i << ": ";
        getline(cin, nombre);
        cout << "Ingrese el apellido " << i << ": ";
        getline(cin, apellido);
        cout << "Ingrese la edad " << i << ": ";
        cin >> edad;
        cin.ignore();
        archivo << nombre << " " << apellido << " " << edad << "\n";
    }
    archivo.close();
    cout << "Datos almacenados correctamente.\n";
}

// Función para mostrar el contenido del archivo
void mostrarArchivo(const string &ruta) {
    ifstream archivo(ruta);
    if (!archivo) {
        cout << "Error al abrir el archivo.\n";
        return;
    }
    string linea;
    cout << "\nContenido del archivo:\n";
    while (getline(archivo, linea)) {
        cout << linea << "\n";
    }
    archivo.close();
}

// Función para buscar un registro en el archivo
void buscarRegistro(const string &ruta) {
    ifstream archivo(ruta);
    if (!archivo) {
        cout << "Error al abrir el archivo.\n";
        return;
    }
    string nombreBuscado, linea;
    cout << "Ingrese el nombre a buscar: ";
    cin.ignore();
    getline(cin, nombreBuscado);
    bool encontrado = false;
    while (getline(archivo, linea)) {
        if (linea.find(nombreBuscado) != string::npos) {
            cout << "Registro encontrado: " << linea << "\n";
            encontrado = true;
        }
    }
    if (!encontrado) {
        cout << "Registro no encontrado.\n";
    }
    archivo.close();
}

// Función para eliminar un registro del archivo
void eliminarRegistro(const string &ruta) {
    ifstream archivo(ruta);
    if (!archivo) {
        cout << "Error al abrir el archivo.\n";
        return;
    }
    ofstream archivoTemp("temp.txt");
    string nombreEliminar, linea;
    cout << "Ingrese el nombre a eliminar: ";
    cin.ignore();
    getline(cin, nombreEliminar);
    bool eliminado = false;
    while (getline(archivo, linea)) {
        if (linea.find(nombreEliminar) == string::npos) {
            archivoTemp << linea << "\n";
        } else {
            eliminado = true;
        }
    }
    archivo.close();
    archivoTemp.close();
    remove(ruta.c_str());
    rename("temp.txt", ruta.c_str());
    if (eliminado) {
        cout << "Registro eliminado correctamente.\n";
    } else {
        cout << "Registro no encontrado.\n";
    }
}

// Menú principal
void mostrarMenu() {
    cout << "\n************************************" << endl;
    cout << "********** Menú de Archivos **********" << endl;
    cout << "************************************" << endl;
    cout << "* 1. Crear archivo y agregar datos *" << endl;
    cout << "* 2. Mostrar archivo --------------*" << endl;
    cout << "* 3. Buscar registro --------------*" << endl;
    cout << "* 4. Eliminar registro ------------*" << endl;
    cout << "* 5. Salir ------------------------*" << endl;
    cout << "************************************" << endl;
    cout << "\nSeleccione una opción: ";
}

// Función principal
int main() {
    string ruta;
    cout << "Ingrese la ruta donde se guardará el archivo (ejemplo: C:\\\\ruta\\\\archivo.txt): ";
    getline(cin, ruta);

    int op;
    do {
        mostrarMenu();
        cin >> op;
        cin.ignore();
        switch (op) {
            case 1:
                crearArchivo(ruta);
                break;
            case 2:
                mostrarArchivo(ruta);
                break;
            case 3:
                buscarRegistro(ruta);
                break;
            case 4:
                eliminarRegistro(ruta);
                break;
            case 5:
                cout << "Saliendo del programa...\n";
                break;
            default:
                cout << "Opción inválida. Intente nuevamente.\n";
        }
    } while (op != 5);

    return 0;
}
