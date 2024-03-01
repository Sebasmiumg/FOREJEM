//8.	Escribir un programa que calcule
// e imprima la suma de los primeros 100 números naturales.
#include <iostream>
using namespace std;

int main() {
    int suma = 0;

    // Calcular la suma de los primeros 100 números naturales
    for (int i = 1; i <= 100; ++i) {
        suma += i;
    }

    // Imprimir la suma
    cout << "La suma de los primeros 100 números naturales es: " << suma << endl;

    return 0;
}
