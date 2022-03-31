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

int sumfirstlastdigit(int x){
    int l = x % 10;
    for ( x; x >= 10;){
        x /= 10;
    }
    return l + x;
}

int sumdigits(int num){
    int res = lastdigit(num);
    for (num; num > 0;){
        num /= 10;
        res += lastdigit(num);
    }
    return res;
}

int main(){
    cout << sumdigits(2351);
}