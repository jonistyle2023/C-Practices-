//
// Created by Jonathan Panchana Rodríguez on 24/4/2025.
//

// Este programa calcula el precio final de un producto aplicando un descuento y el IVA.
// Se utiliza un menú para ingresar los datos y visualizar el resultado.


// Declaración de librerías
#include <iostream>
// Espacio entre nombres
using namespace std;

// Para esta ocasión ire declarando las variables conforme la necesidad del programa

// Función que valida una entrada numérica
float ingresarPositivo(string mensaje) {
    float valor;
    do {
        cout << mensaje;
        cin >> valor;
        if (valor <= 0) {
            cout << "Imposible! El valor debe ser mayor que cero.\n";
        }
    } while (valor <= 0);
    return valor;
}

// Función para calcular precio final
// Recibe el precio, descuento e IVA como parámetros, en esta ocasión se utiliza el tipo float
// para permitir decimales en los cálculos.
float calcularPrecioFinal(float precio, float descuento, float iva) {
    float precioConDescuento = precio - (precio * descuento / 100);
    float precioFinal = precioConDescuento + (precioConDescuento * iva / 100);
    return precioFinal;
}

// Función principal
int main() {
    int op;
    float precio = 0, descuento = 0, iva = 0, resultado = 0;
    bool datosIngresados = false;

    do {
        cout << "\n***** MENU PRINCIPAL *****\n";
        cout << "** 1. Ingreso de datos\n";
        cout << "** 2. Visualizar precio final\n";
        cout << "** 3. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> op;
        // Switch como expresion de control
        // Para este programa el usuario debe usar el 1 para ingresar los datos, el 2 para ver el resultado y el 3 para salir, por lo que
        // debe interactuar con el menú de forma correcta y secuencial.
        switch (op) {
            case 1:
                precio = ingresarPositivo("Ingresa el precio del producto: ");
                descuento = ingresarPositivo("Ingresa el porcentaje de descuento: ");
                iva = ingresarPositivo("Ingrese el porcentaje de IVA: ");
                datosIngresados = true;
                cout << "Datos ingresados correctamente.\n";
                break;

            case 2:
                if (datosIngresados) {
                    resultado = calcularPrecioFinal(precio, descuento, iva);
                    cout << "El precio final del producto es: $" << resultado << endl;
                } else {
                    cout << "Primero debes ingresar los datos parcero.\n";
                }
                break;

            case 3:
                cout << "Saliendo... \n";
                break;

            default:
                cout << "La opcion ingresada no es valida, intenta nuevamente.\n";
        }

    } while (op != 3);

    return 0;
}
