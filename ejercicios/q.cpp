#include <iostream>
#include <vector>

using namespace std;

// Escriba un programa en C para ingresar el número del usuario y verifique que el número 
// sea un palíndromo o que no use un bucle.

int lastdigit(int x){
    return x % 10;
}

vector <int> digitos(double num) {
    vector <int> res;
    for(int i = num; i > 0;) {
        res.push_back(lastdigit(i));
        i /= 10.0;
    }
    return res;
}

vector <int> invertir(vector<int> a){
    vector <int> res(a.size(), 0);
    for (int i = 0; i < a.size(); i++){
        res[a.size() - 1 - i] = a[i];
    }
    return res;
}

bool palindromo(int a){
    vector <int> x = digitos(a);
    vector <int> y = invertir(x);
    if (x == y){
        return true;
    }else{
        return false;
    }
}

int main(){
    cout << palindromo(344);
}