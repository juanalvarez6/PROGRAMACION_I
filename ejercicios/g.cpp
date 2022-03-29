#include <iostream>

using namespace std;

// 7) Escriba un programa en C para ingresar el número del usuario y encuentre la suma de 
// todos los números pares entre 1 y n.

int sumapares(int n){
    int sp = 0;
    for (int i = 0; i <= n; i++){
        if (i % 2 == 0){
            sp += i;
        }
    }
    return sp;
}

int main(){
    cout << sumapares(10) << endl;
}