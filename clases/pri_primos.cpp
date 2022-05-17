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

bool esPrimov2(int x) {
  if (x <= 1) return false;
  else {
    if (esPar(x) && x != 2 )
      return false;// x es par diferente de 2 y por lo tanto no es primo
    else{ // es impar
      for(int i = 3; i < x; i++) {
        if (esDivisor(x,i)) return false;
      }
      // no encontramos un i que fuera divisor de x
      return true;
    }
  }
}

vector <int> primerosprimos(int n){
    vector<int> r;
    for (int i=0; r.size() < n; i++){
        if (esPrimo(i)){
            r.push_back(i);
        }
    }
    return r;
}

void print(vector<int> x){
  for (int i=0; i<x.size();i++){
    cout << " " << x[i];
  }
  cout << endl;
}

int main(){
    vector<int> w = primerosprimos(15);
    print(w);
}