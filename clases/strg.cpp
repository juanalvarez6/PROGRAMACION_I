#include <iostream>
#include <vector>

using namespace std;

void print(vector <char> x){
  for (int i=0; i<x.size();i++) cout << x[i] << " ";
  cout << endl;
}

int esvocal(char a) {
    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A' || a == 'E'
    || a == 'I' || a == 'O' || a == 'U') return 1;
    else return 0;
}

vector <char> vocales(string x){
    vector<char> res;
    for (int i=0;i<x.size();i++){
        if (esvocal(x[i])) res.push_back(x[i]);
    }
    return res;
}

int main(){
    print(vocales("Juan Manuel"));
}