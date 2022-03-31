#include <iostream>
#include <math.h>

using namespace std;

// 13) Escriba un programa en C para ingresar un número del usuario e intercambiar el 
// primer y último dígito del número dado

int primero(int x){
    for (x; x >= 10;){
        x = x / 10;
    }
    return x;
}

int ultimo(int x){
    return x % 10;
}

int swappedNum(int num){
    int swp, digits;

    digits = (int) log10(num); //la cantidad de digitos -1
    cout << digits << endl;
    swp  = ultimo(num);
    cout << swp << endl;
    swp *= (int) pow(10, digits);
    cout << swp << endl;
    swp += num % ((int) pow(10, digits));
    cout << swp << endl;
    swp -= ultimo(num);
    cout << swp << endl;
    swp += primero(num);

    return swp;
}

int main(){
    cout << /* "Numero despues de intercambiar el primer y el ultimo digito es => "
    << */ swappedNum(1345) << endl;
}