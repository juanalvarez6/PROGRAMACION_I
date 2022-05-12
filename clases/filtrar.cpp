#include <iostream>
#include <vector>

using namespace std;

void print(vector <string> x){
    for (int i = 0; i < x.size(); i++){
        cout << x[i] << " ";
    }
}

vector <string> filtrar(vector <string> n, int mayora, int menora) {
    vector <string> resultado;
    for(int i = 0; i < n.size(); i++) {
        if (n[i].size() < menora && n[i].size() > mayora) {
            resultado.push_back(n[i]);
        }    
    }
    return resultado;
}

vector <string> FiltrarMenor5(vector <string> n){
    vector <string> res;
    for(int i = 0; i < n.size(); i++){
        if (n[i].size() < 5){
            res.push_back(n[i]);
        }
    }
    return res;
}

void FiltrarMenor(vector <string> x){
    string res;
    for(int i=0; i < x.size() - 1; i++){
        for(int y=1; y < x.size(); i++){
            if(x[i].size() < x[y].size()){
                res = x[i];
            }else{
                res = x[y];
            }
        }
    }   
    cout << res << endl;
}

int main(){
    vector <string> v = {"Juan", "Manuel", "Alvarez", "Rodriguez", "Andres", "David", "Soto"};
    FiltrarMenor(v);
}