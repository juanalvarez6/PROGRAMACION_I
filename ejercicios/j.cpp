#include <iostream>

using namespace std;

// 10) Escriba un programa en C para ingresar un número del usuario y cuente el 
//  número de dígitos en el entero dado.

int digitos(double numero) {
    int d = 0;
    for(numero; numero > 1.0;) {
        d++;
        numero /= 10.0;
    }
    return d;
}

int main(){
    cout << digitos(4538) << endl;
}