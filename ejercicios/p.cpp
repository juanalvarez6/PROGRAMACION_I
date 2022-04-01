#include <iostream>
#include <vector>

using namespace std;

// 16) Escriba un programa en C para ingresar un número del usuario y encuentre el 
// reverso del número dado usando for loop

void imprimir(vector <int> a){
    cout << "[ ";
    for (int i = 0; i < a.size(); i++){
        cout << a[i] << " " ;
    }
    cout << " ]" << endl;
}

vector <int> invertir(vector<int> a){
    vector <int> res(a.size(), 0);
    for (int i = 0; i < a.size(); i++){
        res[a.size() - 1 - i] = a[i];
    }
    return res;
}

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

int main()
{
    vector <int> v = digitos(2035);
    vector <int> w = invertir(v);
    imprimir(w);
    imprimir(v);
    
    /*vector <int> v;
    for(int i = 0;i<10;i++){
        imprimir(v);
        v.push_back(i); 
    }
    cout << "v tiene " << v.size() << endl;*/
    
    return 0;
}