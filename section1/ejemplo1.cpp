//
// Created by jonat on 13/3/2025.
//

/* Estructura general de un Programa en C++
 * Nombre: Jonathan David Panchana Rodríguez
 * Curso: SW 2/2
 * Fecha: 07/03/2025 */

// Bloque de Declaraciones
// Definir las librerías
#include<iostream>
// Espacio de nombres
using namespace std; //cin leer, cout escribir
// Definir variables y constantes globales
int x, y, z;
float salario, sueldo, r;
char nom[30], ape[30];
bool b;
constexpr float PI = 3.14159265358979323846;
// Prototipos de funciones y procedimientos
float F_procesar();
void P_ingresar();

// Función Principal
int main() {

    // Bloque de Instrucciones
    // Inicialización de las variables
    z = 0;
    salario = 0;
    sueldo = 0;
    // Datos de entrada
    P_ingresar();
    // Proceso
    r=F_procesar();
    //Salida de datos
    cout<<"\n El resultado es: " <<r;
    //Pausa
    cout<<"\n\n";
    system("pause"); // Hace una pausa antes de finalizar el programa
    return 0; // Finalizar el programa

}

// Declaración de funciones y/o procedimientos
void P_ingresar() {
    cout<<"\n Suma de dos numeros. ";
    cout<<"\n Ingrese el valor de x: ";
    cin>>x;
    cout<<"\n Ingrese el valor de y: ";
    cin>>y;
}

float F_procesar() {
    z=x+y;
    cout<<"\n El resultado es: "<<z;
}
