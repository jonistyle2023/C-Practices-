//
// Created by jonat on 24/4/2025.
//

#include <iostream>
using namespace std;

// Definición de variables globales
int i, lim, sum;

int main() {
    // Inicialización de las variables
    i = 0;
    sum = 0;

    // Datos de entrada
    cout << "Ingrese el limite: ";
    cin >> lim;

    // Proceso - do-while
    cout << "S={";
    do {
        sum += i;
        if (i == lim) {
            cout << i << "} \n";
        } else {
            cout << i << ", ";
        }
        i++;
    } while (i <= lim);

    // Datos de salida
    cout << "La suma de los elementos es: " << sum << "\n";
    system("pause");
    return 0;
}
