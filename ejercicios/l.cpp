#include <iostream>

using namespace std;

// 12) Escriba un programa en C para ingresar un número y encuentre la suma del primer y último 
// dígito del número usando el ciclo for

int firstdigit(int x){
    for (x; x >= 10;){
        x = x / 10;
    }
    return x;
}

int lastdigit(int x){
    return x % 10;
}

int sumfirstlastdigit(int x){
    int l = x % 10;
    for ( x; x >= 10;){
        x /= 10;
    }
    return l + x;
}

int main(){
    cout << sumfirstlastdigit(2351);
}