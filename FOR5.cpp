//5.	Crea un programa que imprima la serie de números primos del 1 al 50.
#include <iostream>
using namespace std;
int main() {
    int primo;

    for(int i=1;i<=50; i++){
        if(i%2!=0){
            primo=i;
            cout<<"El numero "<<primo<<" es primo"<<endl;
        }
    }
    return  0;
}