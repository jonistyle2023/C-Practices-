//
// Created by jonathan panchana on 11/4/2025.
//

/* Ejemplo de función de intercambio Recursiva
 * curso: SW 2/2 */

// Bloque de declaraciones
#include <iostream>
using namespace std;
int A, B, C, Aux, Cont;
int F_intercambio(int *X, int *Y, int*Z); // Actualización de datos mas rápida

// Bloque de instrucciones
int main() {
    // Inicialización
    Cont=0;
    // Datos de entrada
    cout<<"\n************************"<<endl;
    cout<<"\n*******INTERCAMBIO******"<<endl;
    cout<<"\n************************"<<endl;
    cout<<"\nIngrese el primer numero: "<<endl;
    cin>>A;
    cout<<"\nIngrese el segundo numero: "<<endl;
    cin>>B;
    cout<<"\nIngrese el tercer numero: "<<endl;
    cin>>C;
    // Proceso
    F_intercambio(&A,&B ,&C);
    // Datos de salida
    cout<<"\nEl nuevo valor de A es: "<<A<<endl;
    cout<<"\nEl nuevo valor de B es: "<<B<<endl;
    cout<<"\nEl nuevo valor de C es: "<<C<<endl;
    // Pausa
    cout<<"\n\nPresione una tecla para continuar..."<<endl;
    cin.ignore();
    cin.get();
    return 0;
}

// Declaración de las funciones
int F_intercambio(int *X, int *Y, int*Z) {
    Aux=*X;
    *X=*Y;
    *Y=*Z;
    *Z=Aux;
    Cont++;
    if (Cont<2) {
        F_intercambio(X,Y,Z);
    }
}

