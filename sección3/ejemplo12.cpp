//
// Created by jonathan on 27/3/2025.
//

/* Programa Computador
 * Autor: Jonathan Panchana Rodríguez
 * curso: SW 2/2
 * fecha 27/03/2025 */

// Bloque de declaraciones
// librerias
#include<iostream>
// espacio de nombres
using namespace std;
// Definición de contantes y variables globales
char Tc[25], Mr[25], Md[25], Tp[25], Tr[25], Tg[25], Tm[25];
float Pr, Hd, Cc, Pt;

//Función principal
int main() {

    //Bloque de Instrucciones
    //Inicialización de variables
    cout<<"\n*";
    cout<<"\n********* COMPUTADOR **********";
    cout<<"\n*";
    cout<<"\nIngrese el Tipo de computador: ";
    gets(Tc);
    cout<<"\nIngrese la Marca: ";
    gets(Mr);
    cout<<"\nIngrese el Modelo: ";
    gets(Md);
    cout<<"\nIngrese el Tipo de procesador: ";
    gets(Tp);
    cout<<"\nIngrese el Tipo de RAM: ";
    gets(Tr);
    cout<<"\nIngrese el Tipo de Targeta Gráfica: ";
    gets(Tg);
    cout<<"\nIngrese el Tamaño: ";
    gets(Tm);
    cout<<"\nIngrese la capacidad de almacenamiento: ";
    cin>>Hd;
    cout<<"\nIngrese el precio: ";
    cin>>Pr;
    cout<<"\nIngrese la cantidad de Equipos: ";
    cin>>Cc;

    // Proceso
    Pt=Pr*Cc;

    // Datos de salida
    cout<<"\nIngrese el Tipo de computador"	 <<Tp;
    cout<<"\nMarca "<<Mr;
    cout<<"\nModelo"<<Md;
    cout<<"\nTipo de procesador"<<Tp;
    cout<<"\nTipo de RAM"<<Tr;
    cout<<"\nTipo de Targeta Gráfica"<<Tg;
    cout<<"\nTamaño"<<Tm;
    cout<<"\nCapacidad del HD"<<Hd;
    cout<<"\nPrecio : "<<Pr;
    cout<<"\nCantidad de Equipos"<<Cc;
    cout<<"\nPrecio Total: "<<Pr;

    //Pausa
    cout<<"\n\n";
    system("pause");
    return 0;
}

