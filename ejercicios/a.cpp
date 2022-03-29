#include <iostream>

using namespace std;

//  1) Escriba un programa en C para imprimir todos los números naturales del 1 al n usando bucle.
// Programa en C para imprimir los primeros n números naturales usando loop.

void naturales(int n){
    for (int i=1; i<=n;i++){
        cout << i << " ";
    }
}

int main(){
    naturales(10);
}