#include <iostream>

using namespace std;

// 3) Escriba un programa en C para imprimir alfabetos de la a a la z usando el bucle for. 

void imprimiralfabeto(){
    int l = 'a';
    for (int i=l; i <= 'z'; i++){
        char x = i;
        cout << i << " " << x << endl;
    }
}

int main(){
    imprimiralfabeto();
}