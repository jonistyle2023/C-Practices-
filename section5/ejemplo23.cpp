#include <iostream>
    using namespace std;

// Función recursiva para calcular el n-ésimo número de Fibonacci
int fibonacci(int n) {
    if (n <= 1)
        return n; // Casos base: fib(0) = 0, fib(1) = 1
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    cout << "Ingresa la cantidad de términos de la serie de Fibonacci: ";
    cin >> n;

    cout << "Serie de Fibonacci hasta " << n << " términos:\n";
    for (int i = 0; i < n; i++) {
        cout << fibonacci(i) << " ";
    }

    cout << endl;
    return 0;
}
