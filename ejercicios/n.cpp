#include <iostream>

using namespace std;

// 14) Escriba un programa en C para ingresar un número y calcular la suma de 
// dígitos usando el ciclo for

int firstdigit(int x){
    for (x; x >= 10;){
        x = x / 10;
    }
    return x;
}

int lastdigit(int x){
    return x % 10;
}

int sumdigits(int num){
    int res = 0;
    for (num; num > 0;){
        res += lastdigit(num);
        num /= 10;
    }
    return res;
}

int main(){
    cout << sumdigits(2351);
}