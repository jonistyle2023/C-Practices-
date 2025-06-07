# **Primeras prácticas con C++**

>[!NOTE]
>
> **Realizado por:** _Jonathan David Panchana Rodríguez_
> 
> Este repositorio contiene una serie de ejemplos y ejercicios básicos para aprender C++, fueron realizados a media que iba aprendiendo el lenguaje, por lo que pueden contener errores o malas prácticas.

>[!IMPORTANT]
> 
> Todos los créditos al respectivo Docente tutor de la materia *Fundamentos de programación* de la carrera de **Software**, el cual es el Ing. _Alfredo Tumbaco_ Msc.

---

## **Contenido**

### **Sección 1: Estructura de un programa en C++**

- **Ejemplo 1:** Estructura general de un programa en C++. 
- **Ejemplo 2:** Uso de _cin._ _cout_ y _gets_. 
- **Ejemplo 3:** Entrada y salida _scanf_ y _printf_ 

---

### **Sección 2: Estructuras de Control Selectivas**

- **Ejemplo 4:** Uso de la **Estructura selectiva _Simple_**
- **Ejemplo 5:** Uso de la **Estructura selectiva _Doble_** 
- **Ejemplo 6:** Uso de la **Estructura selectiva _Cascada_**
- **Ejemplo 7:** Uso de la **Estructura selectiva _Múltiple_**

---

### **Sección 3: Estructuras de Control Repetitivas**

- **Ejemplo 8:** Uso de la **Estructura Repetitiva _Do...while_**
- **Ejemplo 9:** Programa que permite el uso de **_Do...while_**
- **Ejemplo 10:** Uso de la **Estructura Repetitiva _While_**
- **Ejemplo 11:** Uso de la **Estructura Repetitiva _For_**
- **Ejemplo 12:** Programa básico que permite la entrada y salida de datos.

---

### **Sección 4: Funciones y procedimientos**

- **Ejemplo 13:** Uso de funciones y procedimientos #1.
- **Ejemplo 14:** Uso de funciones y procedimientos #2.
- **Ejemplo 15:** Funciones con paso de parámetros por referencia al estilo c.
- **Ejemplo 16:** Funciones con paso de parámetros por referencia al estilo c++.
- **Ejemplo 17:** Ejercicios con MiLibreria.
- **Ejemplo 18:** Librerias - Funciones Matemáticas.
- **Ejemplo 19:** Librerias - Funciones de Cadena.

---

### **Sección 5: Recursividad**

- **Ejemplo 20:** Función de intercambio.
- **Ejemplo 21:** Función de intercambio con 3 variables.
- **Ejemplo 22:** Función de intercambio recursiva.
- **Ejemplo 23:** Función recursiva para calcular el n-ésimo número de Fibonacci (Hecho con ChatGPT).

---

### **Sección 6: Punteros y Arreglos**
- **Ejemplo 24:** Uso de arreglos *Unidimensionales*.
- **Ejemplo 25:** Uso de arreglos *Bidimensionales*.
- **Ejemplo 26:** Uso de arreglos *Tridimensionales*.
- **Ejemplo 27:** Uso de punteros y arreglos *Unidimensionales*.
- **Ejemplo 28:** Uso de punteros y arreglos *Bidimensionales*.
- **Ejemplo 29:** Uso de punteros y arreglos *Tridimensionales*.
- **Ejemplo 30:** Uso de libreria gotoxy.
- **gotoxyExample:** Uso de libreria gotoxy con punteros y arreglos *Unidimensionales*.
- **gotoxyExample1:** Uso de libreria gotoxy con punteros y arreglos *Bidimensionales*.
- **gotoxyExample2:** Uso de libreria gotoxy con punteros y arreglos *Tridimensionales*.

--- 

### **Sección 7: Algoritmos de Búsqueda**
- **binarySearch:** Algoritmo de búsqueda *binaria*.
- **ejemplo31:** Algoritmo de **ordenamiento de burbuja** (Bubble sort).

---

### **Sección 8: Diccionario y Estructuras de Datos**
- **A_EJ01:** Uso de **struct** para crear un diccionario.
- **A_EJ02:** Uso de **struct** para crear un diccionario con funciones.
- **AD_01:** Estructura compuesta.
- **AD_02:** Estructura anidada compuesta.
- **AD_03:** Estructura anidada compuesta con arreglos.

---

### **Sección 9: Manejo de Archivos**
- **Ar_01:** Manejo de archivos de texto.
- **Ar_02:** Manejo de archivos de texto con funciones.

---

## **Ejercicios**

### **Ejercicios Secciones 1 - 3.**

- **Ejercicio 1:** Programa que determina el mayor de 3 números enteros.
- **Ejercicio 2:** Programa para calcular la superficie de un círculo.
- **Ejercicio 3:** Programa para calcular el perímetro y la superficie de un rectángulo.
- **Ejercicio 4:** Programa que lee un nombre de marca, modelo.
- **Ejercicio 5:** Programa que determina la hipotenusa de un triángulo.
- **Ejercicio 6:** Programa que convierte metros a pies y pulgadas.
- **Ejercicio 7:** Programa que calcula el área de un triángulo conocídos sus tres lados.
- **Ejercicio 8:** Programa que calcula el área y el perímetro de un triángulo.

### **Ejercicios Aplicando Recursividad.**

- **Recursividad1:** Menú interactivo para operaciones matemáticas.
- **Recursividad2:** verificador de número palíndromo usando recursión (más funciones de cadena).
- **Recursividad3:** Juego de adivinar el número con intentos y recursividad.
- **Recursividad4:** Generador de la serie Fibonacci hasta un límite definido por el usuario.
- **Recursividad5:** Programa conversor recursivo de números decimales a binarios.

### **Aplicación de Algorítmos de Ordenamiento**

>[!IMPORTANT]
>
> Ubicado en la carpeta `sortingAlgorithms`.

```
project-root/
├── include/
│   ├── bubble_sort.h
│   ├── selection_sort.h
│   ├── insertion_sort.h
│   ├── quicksort.h
│   └── mergesort.h
│
├── sorts/
│   ├── bubble_sort.cpp
│   ├── selection_sort.cpp
│   ├── insertion_sort.cpp
│   ├── quicksort.cpp
│   └── mergesort.cpp
│
├── mainSorting.cpp // Archivo principal para ejecutar los algoritmos de ordenamiento
└── CMakeLists.txt
```

### **Aplicación de Algoritmos de Búsqueda**

>[!IMPORTANT]
>
> Ubicado en la carpeta `searchAlgorithms`.

```
searchAlgorithms/                  <-- Carpeta raíz del nuevo proyecto
├── mainSearch.cpp                 <-- Archivo principal general
│
├── include/                       <-- Headers de los algoritmos
│   ├── linear_search.h
│   └── binary_search.h
│
├── searches/                      <-- Implementaciones de búsqueda
│   ├── linear_search.cpp
│   └── binary_search.cpp
```