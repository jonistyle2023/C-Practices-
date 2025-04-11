//
// Created by jonathan panchana on 11/4/2025.
//

/* Ejemplo de función de intercambio
 * curso: SW 2/2 */

// Bloque de declaraciones
#include <iostream>
using namespace std;
int A, B, C, Aux;
int F_intercambio(int *X, int *Y); // Actualización de datos mas rápida

// Bloque de instrucciones
int main() {
    cout<<"\n************************"<<endl;
    cout<<"\n*******INTERCAMBIO******"<<endl;
    cout<<"\n************************"<<endl;
    cout<<"\nIngrese el primer numero: "<<endl;
    cin>>A;
    cout<<"\nIngrese el segundo numero: "<<endl;
    cin>>B;
    // Proceso
    F_intercambio(&A,&B);
    // Datos de salida
    cout<<"\nEl nuevo valor de A es: "<<A<<endl;
    cout<<"\nEl nuevo valor de B es: "<<B<<endl;
    // Pausa
    cout<<"\n\nPresione una tecla para continuar..."<<endl;
    cin.get();
    return 0;
}

// Declaración de las funciones
int F_intercambio(int *X, int *Y) {
    Aux=*X;
    *X=*Y;
    *Y=Aux;
    return 0;
}

