#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

void print(vector<int> x){
  for (int i=0; i<x.size();i++){
    cout << " " << x[i];
  }
  cout << endl;
}

vector <int> cuadrado(vector <int> a){
    int res = 0;
    vector <int> x;
    for (int i = 0; i < a.size(); i++){
        res = a[i] * a[i];
        x.push_back(res);
    }
    return x;
}

int main(){
    print(cuadrado({10, 7, 8}));
}