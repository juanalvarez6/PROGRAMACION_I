#include <iostream>

using namespace std;

// 5) Escriba un programa en C para imprimir todos los números impares del 1 al n usando el 
// bucle for.

void impares(int n){
    for (int i=1; i<=n; i++){
        if (i % 2 != 0){
            cout << i << " ";
        }
    }
}

int main (){
    impares(5);
}