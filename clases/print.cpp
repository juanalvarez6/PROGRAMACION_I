#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> x){
  for (int i=0; i<x.size();i++) cout << " " << x[i];
  cout << endl;
}

int main(){
  vector <int> a;
  for (int i=0; i < 10; i++) a.push_back(i*i);
  print(a);
}