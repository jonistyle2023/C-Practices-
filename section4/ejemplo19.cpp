//
// Created by jonathan on 10/4/2025.
//

/*Librerias - Funciones de Cadena
Curso: SW 2/2 */
//Bloque de Declaraciones
//Definir librerías
#include<iostream>
#include<string.h>
//Espacio de nombres
using namespace std;
//Definir variables globales
char Nom[30], Ape[30], M1[30], M2[30], M3[65];
int X;
//Función principal
int main()
{
    //Bloque de instrucciones
    //Inicialización de variables
    //Ingreso de datos
    cout<<"\n********************";
    cout<<"\n***** STRING.H *****";
    cout<<"\n********************";
    cout<<"\nIngrese el Mensaje 1: ";
    gets(M1);
    cout<<"\nIngrese el Mensaje 2: ";
    gets(M2);
    //Proceso
    //Función para copiar texto strcpy
    strcpy(Nom,M1);
    cout<<"\nEl contenido de la variable Nom= "<<Nom;
    //Función longitud del texto strlen
    X=strlen(M2);
    cout<<"\nLongitud del Texto = "<<X;
    //Función concatenar texto strcat
    strcat(M3,M1);
    strcat(M3," ");
    strcat(M3,M2);
    cout<<"\nTexto Concatenado= "<<M3;
    //Función comparar texto strcmp
    X=strcmp(M1,M2);
    if (X==0)
    {
        cout<<"\nSon iguales...";
    }
    else
    {
        cout<<"\nSon diferentes...";
    }
    //Pausa
    cout<<"\n\n";
    system("pause");
    return 0;
}