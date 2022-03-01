#include <iostream>

using namespace std;

/** 7)Escribir un programa que dados dos enteros a y b retornar el máximo común divisor entre ellos, 
      Algoritmo de euclides **/
 
int max_c_d(int a, int b){
    int Resto = a % b;
    while(!Resto == 0)
    {
     a = b;
     b = Resto;
     Resto = a % b;
     if(a % b == 0){
         return b;
     }
    }
}

int main(){
    int x = max_c_d(34, 45);
    cout << x << endl;
}