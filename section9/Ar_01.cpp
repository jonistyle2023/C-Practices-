//
// Created by jonathan panchana rodríguez on 5/6/2025.
//
/* Curso: Software 2/2
 * Programa que hace uso de archivos
 */

// Bloque de declaraciones
#include<iostream>
// Espacio de nombres
using namespace std;
char nombre[20], apellido[20];
int i, lim, c, n;
FILE *doc; //Creación de variable tipo archivo
int main() {

    doc = fopen("Personas.txt", "w"); //Crear, modificar, leer o actualizar un archivo
    // Ingreso de datos
    cout << "*********************************\n";
    cout << "******** DATOS DE PERSONA *******\n";
    cout << "*********************************\n";
    cout << "Ingrese cantidad de personas: ";
    cin >> lim;
    getchar();
    // Ingreso y almacenamiento de datos en archivo
    for (i = 1; i <= lim; i++) {
        cout << "\n Ingrese el nombre " << i << ": ";
        gets(nombre);
        cout << "\n Ingrese el apellido " << i << ": ";
        gets(apellido);
        // Almacenamiento de datos en archivo
        fprintf(doc, "%s %s \n", nombre, apellido); //Almacenar los datos
    }
    fclose(doc); //Cerrar el archivo
    //Proceso de consulta
    cout << "\n\n";
    doc = fopen("Personas.txt", "rt");
    while ((c = getc(doc)) != EOF) {
        if (c == 'n') {
            n++;
            cout << "\n";
        } else {
            putchar(c);
        }
    }
    fclose(doc); //Cerrar el archivo
}
