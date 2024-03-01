#include <iostream>
using namespace std;

bool esPrimo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int contador = 0;
    int numero = 2;

    while (contador < 10) {
        if (esPrimo(numero)) {
            cout << numero << " ";
            contador++;
        }
        numero++;
    }

    return 0;
}

//10.	Desarrolla un programa que imprima los primeros 10 números primos.
