// Created by: Jonathan Panchana

/*Procedimiento Gotoxy
Curso: SW 2/2
Fecha: 8/05/2025 */

//Bloque de Declaraciones
//Librerias
#include<iostream>
#include<stdio.h>
#include<windows.h>
//Espacio de nombres
using namespace std;
//Definición de variables globales
int i, j, k;

//Prototipo del procedimiento
void gotoxy(int x, int y); //x columna - y fila
void VectorB();

//Bloque de Instrucciones
//Funcion principal
int main() {
    //gotoxy(10,8);cout<<"Hola";
    VectorB;
    system("pause");
}

//Declaración de los procedimientos
void gotoxy(int x, int y) {
    HANDLE hcon;
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x; //Columna
    dwPos.Y = y; //Filas
    SetConsoleCursorPosition(hcon, dwPos);
}

//VectorB
void VectorB() {
    for (i = 1; i <= 25; i++) {
        gotoxy(5, i);
        cout << "|";
    }

    for (j = 1; j <= 80; j++) {
        gotoxy(j + 5, i);
        cout << "|";
    }
}
