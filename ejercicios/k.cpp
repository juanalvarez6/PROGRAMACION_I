#include <iostream>

using namespace std;

// 11) Escriba un programa en C para ingresar un número del usuario y encuentre 
// el primer y último dígito del número usando ciclo.

int firstdigit(int x){
    for (x; x >= 10;){
        x = x / 10;
    }
    return x;
}

int lastdigit(int x){
    return x % 10;
}

int main(){
    int x = 0;
    cout << "ingresar un numero" << endl;
    cin >> x;
    cout << "El primer digito de " << x << " es => " << firstdigit(x) << endl; 
    cout << "El ultimo digito de " << x << " es => " << lastdigit(x) << endl;
}