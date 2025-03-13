//
// Created by jonat on 13/3/2025.
//

#include "ejemplo2.h"
#include "iostream"
#include "cstring"

/* Crear un programa para el uso de cin. cout y gets (entrada numérica, salida e ingreso alfanumérico)
 * Autor: Alfredo Tumbaco
 * Nombre: Jonathan Panchana Rodríguez
 * Curso: SW FP 2/2
 * Fecha: 13/03/2025 */


// Bloque de Declaraciones
// Definir las librerías

// Espacio de nombres
using namespace std;
// Definir variables y contantes globales
// Siempre declaro las variables con las iniciales en minúscula,
// puesto que para mí es una buena práctica seguir la convención camelCase.
// Pero bueno creo que ya depende del hábito de cada programador, solo esa observación.
int ed, an;

char nom[30], ape[30];
float sueldo, ht, vht;
const float in=25.75;

// Función principal
int main() {

    // Bloque de instrucciones
    // Inicialización de variables
    sueldo=0;
    // Datos de entrada
    cout << "\n****************";
    cout << "\n** Datos Persona **";
    cout << "\n****************";
    cout << "\nIngrese el Nombre: ";
    gets(nom);
    cout << "\nIngrese el Apellido: ";
    gets(ape);
    cout << "\nIngrese la Edad: ";
    cin>>ed;
    cout << "\nIngrese el A\xA4o: ";
    cin>>an;
    cout << "\nIngrese Valor de Horas trabajadas: ";
    cin>>vht;
    cout << "\nIngrese total de Horas trabajadas:";
    cin>>ht;

    // Proceso: Sueldo=(VHT*HT) + Incremento
    sueldo=(vht*ht)+in;
    // Datos de salida
    cout<<"\n****************";
    cout<<"\n** Rol de Pagos **";
    cout<<"\n****************";
    cout<<"\nEl Nombre es: "<<nom;
    cout<<"\nEl Apellido es: "<<ape;
    cout<<"\nEl Sueldo es: "<<sueldo;

    //Pausa
    cout<<"\n Presione Enter para continuar... ";
    cin.ignore();
    cin.get();

    return 0;
}