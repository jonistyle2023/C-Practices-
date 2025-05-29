//
// Created by jonathan panchana rodríguez on 29/5/2025.
//
/*Estructura compuesta*/
// Bloque de declaraciones
#include <cstdio>
#include <cstring>
#include <iostream>
#include <ostream>
// Espacio entre nombres
using namespace std;

// Definición de la estructura
// Declaracion de las estructuras de datos

struct TB_PERSONA {
    int ID_PERSONA;
    char NOMBRE[30];
    char APELLIDO[30];
    int EDAD;
    char CEDULA[30];
    char FN;
    // otros atributos
};

// Definición de la variable tipo estructura
struct TB_PERSONA TB;

// Bloque de instrucciones
int main() {
    // Asignación de valores a los atributos de la estructura
    cout << "***************************";
    cout << "***** DATOS DE PERSONA ****";
    cout << "***************************";
    cout << "\nIngrese el ID de la persona: ";
    cin >> TB.ID_PERSONA;
    cout << "Ingrese el nombre de la persona: ";
    cin.ignore(); // Limpiar el buffer de entrada
    cin.getline(TB.NOMBRE, 30);
    cout << "Ingrese el apellido de la persona: ";
    cin.getline(TB.APELLIDO, 30);
    cout << "Ingrese la edad de la persona: ";
    cin >> TB.EDAD;
    cout << "Ingrese la cédula de la persona: ";
    cin.ignore(); // Limpiar el buffer de entrada
    cin.getline(TB.CEDULA, 30);
    cout << "Ingrese la fecha de nacimiento (DD/MM/AAAA): ";
    cin >> TB.FN;

    // Mostrar los datos ingresados
    cout << "\n\n***************************";
    cout << "***** DATOS INGRESADOS ****";
    cout << "***************************";
    cout << "\nID de la persona: " << TB.ID_PERSONA;
    cout << "\nNombre de la persona: " << TB.NOMBRE;
    cout << "\nApellido de la persona: " << TB.APELLIDO;
    cout << "\nEdad de la persona: " << TB.EDAD;
    cout << "\nCédula de la persona: " << TB.CEDULA;
    cout << "\nFecha de nacimiento: " << TB.FN;
    cout << "\n\n***************************";
    cout << "***** FIN DEL PROGRAMA ****";
    cout << "***************************\n";
    // Esperar a que el usuario presione una tecla antes de salir
    cout << "Presione Enter para salir...";
    cin.ignore();
    cin.get();
    // Retornar 0 para indicar que el programa finalizó correctamente
    cout << "\n\nGracias por usar el programa.\n";
    return 0;
}