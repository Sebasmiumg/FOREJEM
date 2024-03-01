#include <iostream>
using namespace std;

int main() {
    int numero;
    unsigned long long int resultado = 1; // Usamos unsigned long long int para manejar grandes números

    cout << "Ingrese un numero: ";
    cin >> numero;

    // Calcular el factorial
    for(int i = 2; i <= numero; ++i) {
        resultado *= i;
    }

    cout << "El factorial de " << numero << " es " << resultado << endl;

    return 0;
}

//4.	Haz un programa que calcule el factorial de un número ingresado por el usuario.