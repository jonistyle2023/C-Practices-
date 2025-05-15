//
// Created by jonathan Panchana Rodríguez on 9/5/2025.
//
#include <iostream>
#include <windows.h> // Para usar gotoxy
using namespace std;

// Función para mover el cursor
void gotoxy(int x, int y) {
    COORD coord = { (SHORT)x, (SHORT)y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main() {
    int matriz[3][3]; // Matriz 3x3

    // Etiquetas de columnas (j)
    gotoxy(10, 2); cout << "j";
    gotoxy(14, 2); cout << "1";
    gotoxy(22, 2); cout << "2";
    gotoxy(30, 2); cout << "3";

    // Etiquetas de filas (i)
    gotoxy(7, 4); cout << "i";
    gotoxy(7, 6); cout << "1";
    gotoxy(7, 8); cout << "2";
    gotoxy(7,10); cout << "3";

    // Dibujar tabla vacía
    gotoxy(10, 4); cout << "+--------+--------+--------+";
    gotoxy(10, 5); cout << "|        |        |        |";
    gotoxy(10, 6); cout << "+--------+--------+--------+";
    gotoxy(10, 7); cout << "|        |        |        |";
    gotoxy(10, 8); cout << "+--------+--------+--------+";
    gotoxy(10, 9); cout << "|        |        |        |";
    gotoxy(10,10); cout << "+--------+--------+--------+";

    // Pedir valores al usuario en cada casilla
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            gotoxy(13 + j * 8, 5 + i * 2); // Posición exacta de la casilla
            cin >> matriz[i][j];
        }
    }

    return 0;
}