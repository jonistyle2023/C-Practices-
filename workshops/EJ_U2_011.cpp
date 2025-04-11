//
// Created by jonathan Panchana on 10/4/2025.
//
/* Librerias - Funciones Aleatorias (5 ramdom y 5 de ctime)
 * Curso: SW 2/2 */
//Bloque de Declaraciones
//Definir librerías
#include<iostream>
#include<random>
#include<ctime>
#include<string>
using namespace std;

// Función para generar un número aleatorio entre dos límites
float generarNumeroAleatorio(float limiteInferior, float limiteSuperior) {
    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<> dis(limiteInferior, limiteSuperior);
    return dis(gen);
}

// Función para generar una contraseña aleatoria
string generarContrasena(int longitud) {
    const string caracteres = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*";
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, caracteres.size() - 1);
    string contrasena;
    for (int i = 0; i < longitud; i++) {
        contrasena += caracteres[dis(gen)];
    }
    return contrasena;
}

// Función para generar una palabra aleatoria tipo Scrabble
string generarPalabraScrabble(int longitud) {
    const string letras = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, letras.size() - 1);
    string palabra;
    for (int i = 0; i < longitud; i++) {
        palabra += letras[dis(gen)];
    }
    return palabra;
}

// Función para simular un dado de 6 caras
int lanzarDado() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, 6);
    return dis(gen);
}

// Función para generar un color hexadecimal aleatorio
string generarColorHex() {
    const string hex = "0123456789ABCDEF";
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, hex.size() - 1);
    string color = "#";
    for (int i = 0; i < 6; i++) {
        color += hex[dis(gen)];
    }
    return color;
}

// Función para obtener la hora actual
string obtenerHoraActual() {
    time_t ahora = time(0);
    tm *tiempoLocal = localtime(&ahora);
    char buffer[10];
    strftime(buffer, sizeof(buffer), "%H:%M:%S", tiempoLocal);
    return string(buffer);
}

// Función para obtener la fecha actual
string obtenerFechaActual() {
    time_t ahora = time(0);
    tm *tiempoLocal = localtime(&ahora);
    char buffer[12];
    strftime(buffer, sizeof(buffer), "%d/%m/%Y", tiempoLocal);
    return string(buffer);
}

// Función para calcular la diferencia en días entre dos fechas
int calcularDiferenciaDias(time_t fecha1, time_t fecha2) {
    return difftime(fecha2, fecha1) / (60 * 60 * 24);
}

// Función para determinar si es de día o de noche
string determinarDiaNoche() {
    time_t ahora = time(0);
    tm *tiempoLocal = localtime(&ahora);
    int hora = tiempoLocal->tm_hour;
    return (hora >= 6 && hora < 18) ? "Día" : "Noche";
}

// Función para obtener el día de la semana
string obtenerDiaSemana() {
    time_t ahora = time(0);
    tm *tiempoLocal = localtime(&ahora);
    const string dias[] = {"Domingo", "Lunes", "Martes", "Miércoles", "Jueves", "Viernes", "Sábado"};
    return dias[tiempoLocal->tm_wday];
}

//Función principal
int main() {
    //Bloque de instrucciones
    float limiteInferior, limiteSuperior;
    cout << "\n********************";
    cout << "\n***** RANDOM.H Y TIME *****";
    cout << "\n********************";
    cout << "\nIngrese limite Inferior: ";
    cin >> limiteInferior;
    cout << "\nIngrese limite Superior: ";
    cin >> limiteSuperior;

    // Ejemplo de funciones de random
    cout << "\nNúmero aleatorio: " << generarNumeroAleatorio(limiteInferior, limiteSuperior);
    cout << "\nContraseña aleatoria: " << generarContrasena(10);
    cout << "\nPalabra tipo Scrabble: " << generarPalabraScrabble(7);
    cout << "\nResultado del dado: " << lanzarDado();
    cout << "\nColor hexadecimal aleatorio: " << generarColorHex();

    // Ejemplo de funciones de ctime
    cout << "\nHora actual: " << obtenerHoraActual();
    cout << "\nFecha actual: " << obtenerFechaActual();
    cout << "\nEs de día o de noche: " << determinarDiaNoche();
    cout << "\nDía de la semana: " << obtenerDiaSemana();

    // Pausa
    cout << "\n\n";
    system("pause");
    return 0;
}