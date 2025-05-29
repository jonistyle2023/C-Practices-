/*Estructuras Compuestas, anidadas y arreglos
Autor: Alfredo Tumbaco
Curso: SW 2/2
Fecha: 29/05/2025 */

//Bloque de Declaraciones
//Definir librer�as
#include<iostream>
//Espacio de nombres
using namespace std;
//Definir variables y constantes gloables
int i, j;
char RP;
//Declarar estructuras Param�tricas (Secundarias)
struct TB_DIR
{
	char CIUDAD[30];
	char DIRECC[30];
	char CODP[30];
};
//Declaraci�n de estructuras de datos (Principal)
struct TB_PERSONA
{
	int ID_PERSONA;
	char CEDULA[30];
	char NOMBRE[30];
	char APELLIDO[30];
	char FN[30]; //Fecha de Nacimiento
	//otros atributos
	struct TB_DIR D; //Datos de direccion
};
//Definici�n de la variable tipo estructura + arreglo
struct TB_PERSONA P[30];

//Bloque de Instrucciones
//funci�n principal
int main()
{
	//Inicializaci�n de variables
	i=0;
	j=0;
	do
	{
		system("cls");
		i++;
		//Ingreso de datos
		cout<<"\n****************************";
		cout<<"\n***** DATOS DE PERSONA *****";
		cout<<"\n****************************";
		cout<<"\nIngrese la Identificacion: ";
		cin>>P[i].ID_PERSONA;
		getchar();
		cout<<"\nIngrese la Cedula: ";
		gets(P[i].CEDULA);
		cout<<"\nIngrese el Nombre: ";
		gets(P[i].NOMBRE);
		cout<<"\nIngrese el Apellido: ";
		gets(P[i].APELLIDO);
		cout<<"\nIngrese la Fecha de Nacimiento: ";
		gets(P[i].FN);
		cout<<"\nIngrese la Ciudad: ";
		gets(P[i].D.CIUDAD);
		cout<<"\nIngrese la Direccion: ";
		gets(P[i].D.DIRECC);
		cout<<"\nIngrese el codigo postal: ";
		gets(P[i].D.CODP);

		cout<<"\nDesea registrar otra persona (S/N): ";
		cin>>RP;
	}while(RP=='S'||RP=='s');



	//Proceso

	//Salida de datos
	cout<<"\n****************************";
	cout<<"\n***** NOMINA DE PERSONA *****";
	cout<<"\n****************************";
	cout<<"\nID \t CEDULA \t NOMBRES \t APELLIDOS \t F. NAC \t CIUDAD \t DIRECC \t CP \n";
	for(j=1;j<=i;j++)
	{
		cout<<P[j].ID_PERSONA<<" \t "<<P[j].CEDULA<<" \t "<<P[j].NOMBRE<<" \t "<<P[j].APELLIDO<<" \t "<<P[j].FN<<" \t "<<P[j].D.CIUDAD<<" \t "<<P[j].D.DIRECC<<" \t "<<P[j].D.CODP<<"\n";
	}

	//Pausa
	cout<<"\n\n";
	system("pause");
	return 0;
}