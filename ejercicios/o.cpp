#include <iostream>

using namespace std;

// 15) Escriba un programa en C para ingresar un número del usuario y calcular 
// el producto de sus dígitos

int firstdigit(int x){
    for (x; x >= 10;){
        x = x / 10;
    }
    return x;
}

int lastdigit(int x){
    return x % 10;
}

int multiplyDigits(int num){
    int res = 1;
    for (num; num >= 1;){
        res *= lastdigit(num);
        num /= 10;
    }
    return res;
}

int main(){
    cout << multiplyDigits(233);
}