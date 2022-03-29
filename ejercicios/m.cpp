#include <iostream>
#include <math.h>

using namespace std;

// 13) Escriba un programa en C para ingresar un número del usuario e intercambiar el 
// primer y último dígito del número dado

int intercambiodigitos(int num){
    int swappedNum;
    int firstDigit, lastDigit, digits;

    lastDigit = num % 10;

    digits = (int)log10(num); 

    firstDigit = (int)(num / pow(10, digits)); 

    swappedNum  = lastDigit;
    swappedNum *= (int) pow(10, digits);
    swappedNum += num % ((int) pow(10, digits));
    swappedNum -= lastDigit;
    swappedNum += firstDigit;

    return swappedNum;
}

int main(){
    cout << "Numero despues de intercambiar el primer y el ultimo digito => " 
    << intercambiodigitos(7689) << endl;
}