#include <iostream>
#include <vector>

using namespace std;

// 4) Escriba un programa en C para imprimir todos los números pares del 1 al n usando el 
// bucle for.

void pares(int n){
  for (int i=1; i<=n; i++){
    if (i % 2 == 0){
      cout << i << " ";
    }
  }
}

int main(){
  pares(5);
}