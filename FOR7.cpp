//7.	Haz un programa que imprima los primeros 10 términos de la serie de Fibonacci.
#include <iostream>
using namespace std;

int main() {
    int a = 0, b = 1, nextTerm;

    // Imprimir los primeros dos términos
    cout << a << ", " << b << ", ";

    // Calcular e imprimir los siguientes 8 términos
    for (int i = 2; i < 10; ++i) {
        nextTerm = a + b;
        cout << nextTerm << ", ";

        // Actualizar los valores de a y b
        a = b;
        b = nextTerm;
    }

    return 0;
}
