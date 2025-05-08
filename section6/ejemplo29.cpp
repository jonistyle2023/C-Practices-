//
// Created by jonathan panchana on 8/5/2025.
//
/* Arreglos Tridimensionales
 * Autor: Jonathan Panchana Rodríguez
 * Curso: Programación ISoftware 2/2 */

// Bloque de declaraciones
// Definición de las librerias
#include <iostream>
// Espacio de Nombres
using namespace std;
// Definición de variables globales
int CUBO[3][3][3], k, i, j, LimP, LimF, LimC, Ac;

// Bloque de instrucciones
// Función principal
int main() {
    // Inicialización de datos
    k=0;
    i=0;
    j=0;
    Ac=0;
    //Datos de entrada
    cout << "\n***************************";
    cout << "\n**** ARREGLOS (CUBO) ****";
    cout << "\n***************************";
    cout << "\nIngrese numero de Planos: ";
    cin>>LimP;
    cout << "\nIngrese numero de filas: ";
    cin>>LimF;
    cout << "\nIngrese numero de columnas: ";
    cin>>LimC;

    // Proceso
    // Ingreso de datos al Cubo de información
    for (k=1; k<LimP; k++) { // Panos
        for (i=1; i<=LimF; i++) { // Filas
            for (j=1; j<=LimC; j++) { // Columnas
                cout << "\nIngrese el elemento [" << k << "][" << i << "][" << j << "]: ";
                cin >> CUBO[k][i][j];
            }
            // cout << "\nIngrese el elemento [" << i << "]: ";
            // cin >> Vector[i];
        }
    }
    // Procesos Generales
    for (k=1; k<LimP; k++) { // Panos
        for (i=1; i<=LimF; i++) { // Filas
            for (j=1; j<=LimC; j++) { // Columnas
                cout << "\nIngrese el elemento [" << k << "][" << i << "][" << j << "]: ";
                Ac += CUBO[k][i][j];
            }
        }
    }

    // Datos de salida
    cout << "\nLa suma de los elementos es: " << Ac;
    cout << "\n\n";
    system("pause");
    return 0;
}