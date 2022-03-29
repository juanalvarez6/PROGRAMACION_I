#include <iostream>

using namespace std;

// 2) Escriba un programa en C para imprimir todos los números naturales en orden inverso 
// desde n hasta 1 usando el bucle for.

void inversonaturales(int n){
    for (int i = n; i >=1; i--){
        cout << i << " ";
    }
}

int main(){
    inversonaturales(10);
}