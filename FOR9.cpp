//9.	Crea un programa que pida al usuario
//ingresar un número y luego imprima todos los divisores de ese número.
#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    // Imprimir todos los divisores
    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            cout << i << " ";
        }
    }

    return 0;
}
