#include <iostream>
#include <vector>

using namespace std;

// Retorna si x es un numero primo. x debe ser un numero entero y positivo

bool esDivisor(int x, int y) {
  if (x % y == 0) {
    return true;
  } else {
    return false;
  }
}

bool esPar(int a) {
  if (a % 2 == 0) {
    return true;
  } else {
    return false;
  }
}

bool esPrimo(int x){
    if(x<2) return false;
    bool res=true;
    for(int i=2; i<x; i++){
        if(x % i == 0) res = false;
    }
    if(res == true) return true;
    else return false;
}

int main(){
  vector <int> a;
  for (int i=1; i<45; i++){
    bool p = esPrimo(i);
    if (p == 1){
      a.push_back(i);
    }
  }
   for (int i=0; i<a.size();i++){
      cout << a[i] << endl;
  }
}