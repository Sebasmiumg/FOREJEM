//2.	Escribe un programa que solicite al usuario un número y
// muestre la tabla de multiplicar de ese número del 1 al 10.
#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    // Mostrar la tabla de multiplicar
    for (int i = 1; i <= 10; ++i) {
        cout << numero << " * " << i << " = " << numero * i << endl;
    }

    return 0;
}
