//
// Created by jonathan panchana on 8/5/2025.
//

/* Ejemplo de uso de gotoxy
 * Autor: Jonathan Panchana Rodríguez
 * Curso: Programación Software 2/2
 * Fecha: 8/5/2025
 */

#include <stdio.h>
#include <windows.h>

// Procedimiento gotoxy
void gotoxy(int x, int y) {
    HANDLE hcon;
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;
    SetConsoleCursorPosition(hcon, dwPos);
}

int main() {
    int vector[3]; // Índices del 1 al 3 (ignoramos el 0 para coincidir con la tabla)
    int x = 20; // Posición inicial en X
    int y = 10; // Fila de impresión

    // Mostrar cabecera
    gotoxy(10, y - 2); printf("Tabla 2x2 (horizontal):");
    gotoxy(10, y - 1); printf("Indice | 1 | 2 | 3 |");
    gotoxy(10, y);     printf("Vector |");

    // Ingreso de valores en el eje X (horizontal)
    for (int i = 1; i <= 3; i++) {
        gotoxy(x + (i - 1) * 4, y);
        scanf("%d", &vector[i]);
    }

    // Mostrar resultado (opcional)
    gotoxy(10, y + 2); printf("Contenido del vector: ");
    for (int i = 1; i <= 3; i++) {
        printf("%d ", vector[i]);
    }

    gotoxy(10, y + 4);
    system("pause");
    return 0;
}

