//
// Created by jonathan panchana on 3/4/2025.
//

/* Procedimientos
 * Autor: Jonathan Panchana Rodríguez
 * curso: SW 2/2
 * fecha 3/04/2025 */

// Bloque de declaraciones
// librerias
#include<iostream>
// espacio de nombres
using namespace std;

// Definición de contantes y variables globales
float A, B, C, D;
// Prototipos de procedimientos
void P_Inicializar ();
void P_Ingresar();
float P_Procesar(float X, float Y);
void P_Visualizar();
void P_Pausa();

// Función principal
int main() {

    // Bloque de Instrucciones
    // Inicialización de variables
    P_Inicializar();

    // Datos de entrada
    P_Ingresar();

    // Proceso
    D=P_Procesar(A,B);

    // Datos de salida
    P_Visualizar();

    // Pausa
    P_Pausa();

    return 0;
} // Fin del programa

// Declaración de los procedimientos
void P_Inicializar() {
    // Inicialización de variables
    C=0;
    D=0;
    // Llamada a los procedimientos
} // Fin del procedimiento

void P_Ingresar() {
    cout << "\n****************************";
    cout << "\n*********** C=A*B **********";
    cout << "\n****************************";
    cout << "\nIngrese el valor de A: ";
    cin >> A;
    cout << "Ingrese el valor de B: ";
    cin >> B;
}

float P_Procesar(float X, float Y) {
    C=X*Y;
    return C;
}

void P_Visualizar() {
    cout<<"\nEl resultado es: "<<D;
}

void P_Pausa() {
    cout << "\n\n";
    system("pause");
}