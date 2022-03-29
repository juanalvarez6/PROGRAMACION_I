#include <iostream>

using namespace std;

// 6) Escriba un programa en C para encontrar la suma de todos los números naturales entre 1 y 
// n usando el bucle for.

int sumanaturales(int n){
    int s = 0;
    for (int i = 0; i <= n; i++){
        s += i;
    }
    return s;
}

int main(){
    cout << sumanaturales(10);
}

