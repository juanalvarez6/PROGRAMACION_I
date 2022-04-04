#include <iostream>
#include <vector>

using namespace std;

bool ascendente(vector <int> a){
    bool x;
    for (int i = 0; i < a.size() - 1; i++){
        for (int y = 1; y < a.size(); y++){
            if (a[y] > a[i]){
                x = true;
            }else{
                x = false;
            }
        }
    }
    return x;
}

int main(){
    cout << ascendente({1, 2, 3, 2}) << endl;
}