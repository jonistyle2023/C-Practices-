#include <iostream>
#include <stdio.h>
#include <windows.h>
using namespace std;

float i, j, lim, e;
char rp;

struct criterioaut {
    float c1;
    float c2;
    float c3;
};

struct empresa {
    char nemp[30];
    char demp[30];
    criterioaut dca; // Aquí agrego correctamente la estructura anidada
    float paemp;
};

struct empresa de;

void gotoxy(int x, int y) {
    HANDLE hcon;
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;  // columna
    dwPos.Y = y;  // fila
    SetConsoleCursorPosition(hcon, dwPos); // Se corrigió el nombre de la función
}

int main() {
    do {
        i = 21;
        j = 0;
        e = 10;
        system("cls");
        cout << "**** DATOS DE EMPRESAS ****";
        cout << "\nNombre: ";
        gets(de.nemp);
        cout << "\nDirecci\242n: ";
        gets(de.demp);
        cout << "\n*** CRITERIOS DE AUTOMATIZACION ***";
        cout << "\nCriterio # 1: ";
        cin >> de.dca.c1;
        cout << "\nCriterio # 2: ";
        cin >> de.dca.c2;
        cout << "\nCriterio # 3: ";
        cin >> de.dca.c3;

        // Proceso
        de.paemp = de.dca.c1 + de.dca.c2 + de.dca.c3;
        lim = de.paemp / e;

        // Datos de salida
        cout << "\nPorcentaje de Automatizaci\242n: " << de.paemp << "%";

        // Gráfica
        for (j = 1; j <= lim; j++) {
            gotoxy(j, i);
            cout << char(219) << char(219);
        }

        cout << "\nDesea repetir el proceso (S/N): ";
        cin >> rp;
        getchar();
    } while (rp == 'S' || rp == 's');
    gotoxy(1, 25);
    system("pause");
    return 0;
}