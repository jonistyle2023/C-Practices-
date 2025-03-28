//
// Created by jonat on 13/3/2025.
//

/* Crear un programa en C++
 * Entrada y salida scanf y printf
 * Nombre: Jonathan Panchana Rodríguez
 * Curso: SW 2/2
 * Fecha: 13/03/2025*/

// Bloque de Declaraciones
// Definir las librerías
#include <iostream>

// Definición de constantes y variables globales
int ed, an;
float sueldo, vht, ht;
char nom[30], ape[30];
const float in=25.75;

// Función principal
int main() {

    // Bloque de instrucciones
    // Inicialización de variables
    sueldo=0;

    // Datos de entrada
    printf("\n*******************");
    printf("\n** DATOS PERSONA **");
    printf("\nIngrese el Nombre: ");
    gets(nom);
    printf("\nIngrese el Apellido: ");
    gets(ape);
    printf("\nIngrese la Edad: ");
    scanf("%d",&ed);
    printf("\nIngrese el A\xA4o: ");
    scanf("%d",&an);
    printf("\nIngrese el valor de las horas trabajadas: ");
    scanf("%f",&vht);
    printf("\nIngrese las horas trabajadas: ");
    scanf("%f",&ht);

    // Proceso - Sueldo=(Vht*Ht)+In
    sueldo=(vht*ht)+in;

    // Datos de salida
    printf("\n******************");
    printf("\n** ROL DE PAGOS **");
    printf("\n******************");

    // %s cadena texto; %d números enteros; %f números decimales
    printf("\nNombre: %s",nom);
    printf("\nApellido: %s",ape);
    printf("\nSueldo: %f",sueldo);

    //Pausa
    printf("\n\n");
    system("pause");
    return 0;

}