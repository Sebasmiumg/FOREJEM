#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Ingrese un numero: ";
    cin >> n;

    // Imprimir la serie
    for (int i = 1; i <= n; i += 2) {
        cout << i << " ";
    }

    return 0;
}
//6.	Desarrolla un programa que imprima la siguiente serie: 1, 3, 6, 10, 15, ..., n.

