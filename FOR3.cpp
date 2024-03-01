//3.	Escribe un programa en C++ que solicite al usuario ingresar un número
// entero positivo n y luego
//calcule la suma de todos los números pares desde 1 hasta n.

#include <iostream>
using namespace std;

int main() {
    int n, suma = 0;

    cout << "Ingrese un numero entero positivo: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) { // Verifica si el número es par
            suma += i; // Suma el número par a la variable suma
        }
    }

    cout << "La suma de los numeros pares desde 1 hasta " << n << " es: " << suma << endl;

    return 0;
}
