//
// Created by Jonathan Panchana Rodríguez on 5/6/2025.
//

/* Aplicar el concepto de diccionario*
 * Curso: Software 2/2.
 */

// Bloque de declaraciones
// Definir librerias
#include <iostream>
#include <map>

// Librerias para hacer uso de las tildes
#include <clocale>
#include <windows.h>
// Espacio de nombres
using namespace std;
// Variables y constantes globales
char Nom[30], Nb[30];
int Edad, Lim, i; // Contador para que vayan identificando los elementos
// Declaración del diccionario
map<string, int> Sistema;

// Definir un variable tipo iterador
map<string, int>::iterator it;

// Bloque de instrucciones
// Función principal
int main() {

    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    setlocale(LC_ALL, "es_ES.UTF-8");

    //Ingreso de cantidad de elementos al diccionario
    cout << "Ingrese el número de elementos: ";
    cin >> Lim;
    getchar();
    //Ingresamos elementos al diccionario
    for (i = 1; i <= Lim; i++) {
        cout << "Ingrese Nombre[" << i << "]: ";
        gets(Nom);
        cout << "Ingrese el edad[" << i << "]: ";
        cin >> Edad;
        getchar();
        // Agregar elementos al diccionario
        Sistema.insert(make_pair(Nom, Edad));
    }
    //Datos de Salida
    cout << "*********************************\n";
    cout << "***** MOSTRAR DICCIONARIO *******\n";
    cout << "*********************************\n";
    // Recorrer todos los elementos del diccionario
    for (it = Sistema.begin(); it != Sistema.end(); ++it) {
        cout << it->first << ":" << it->second << "\n";
    }

    //Datos de Salida
    cout << "*********************************\n";
    cout << "*** BUSCAR ELEMENTO POR NOMBRE **\n";
    cout << "*********************************\n";
    cout << "\nIngrese el nombre a buscar: ";
    gets(Nb);
    // Buscar un elemento en el diccionario
    it = Sistema.find(Nb);
    if (it != Sistema.end()) {
        cout << "\nLa edad de " << Nb << " es: " << Sistema[Nb];
    }

    // Eliminar un elemento del diccionario
    cout << "\n\nIngrese el nombre a eliminar: ";
    gets(Nb);
    Sistema.erase(Nb);
    cout << "\nEliminado elemento....\n";
    //Datos de Salida
    cout << "*********************************\n";
    cout << "*MOSTRAR DICCIONARIO ACTUALIZADO*\n";
    cout << "*********************************\n";
    // Recorrer todos los elementos del diccionario
    for (it = Sistema.begin(); it != Sistema.end(); ++it) {
        cout << it->first << ":" << it->second << "\n";
    }
    //pausa
    cout << "\n\n";
    system("pause");
}
