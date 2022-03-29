#include <iostream>

using namespace std;

// 9) Escriba un programa en C para ingresar un número del usuario e imprimir la 
// tabla de multiplicar del número dado usando el ciclo for.

void tablamultiplicar(int n){
    for (int i=1; i<=10; i++){
        cout << n << " * " << i << " = " << i * n << endl;
    }
}

int main(){
    tablamultiplicar(3);
}