//
// Created by jonathan panchana on 8/5/2025.
//

/* Procedimiento Gotoxy
 * Curso: Software 2/2
 */

// Bloque de declaraciones
// Definición de las librerias
#include <iostream>
#include <stdio.h>
#include <windows.h>
// Espacio de Nombres
using namespace std;
// Definición de variables globales
int i, j, k;
// Prototipo del procedimiento
void gotoxy(int x, int y); // X=columna, Y=fila

// Función principal
int main() {
    gotoxy(10,8);cout << "Hello World!";
}

// Declaración de los procedimientos
void gotoxy(int x,int y){
    HANDLE hcon;
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;  // Columna
    dwPos.Y= y;  // Fila
    SetConsoleCursorPosition(hcon,dwPos);
}