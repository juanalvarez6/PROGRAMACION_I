#include <iostream>

using namespace std;

// 8) Escriba un programa en C para encontrar la suma de todos los números impares del 1 al 
// n usando el bucle for.

int sumaimpares(int n){
    int sp = 0;
    for (int i = 0; i <= n; i++){
        if (i % 2 != 0){
            sp += i;
        }
    }
    return sp;
}

int main(){
    cout << sumaimpares(5) << endl;
}