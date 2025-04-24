//
// Created by jonat on 24/4/2025.
//

#include<iostream>
using namespace std;
int num1, num2;
int intercambio(int *x, int *y);
int main()
{
    cout<<"\n Ingrese el primer elemento: ";
    cin>>num1;
    cout<<"\n Ingrese el segundo elemento: ";
    cin>>num2;

cout<<"\n El valor del primer elemento es: "<<num1;
    cout<<"\n El valor del segundo elemento es: "<<num2;
}
int intercambio(int *x, int *y)
{
    int aux;
    aux = *x;
    *x = *y;
    *y = aux;
    intercambio(x,y);
}