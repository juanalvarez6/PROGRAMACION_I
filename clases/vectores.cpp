#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector <int> v; //declara una variable "v" que es de tipo vector de enteros. Es decir, 
    //almacena una secuencia de enteros.
    v.push_back(42); // Adicciona 42 a la secuencia.  
    v.push_back(54);
    v.push_back(45);
    v.push_back(43);

    for( int i = 0; i < v.size(); i++){
        cout << v[i] << endl; 
        // 0| 1| 2| 3 Indice del vector
        // 1| 2| 3| 4 v.size() tamaño del vector
        //42|54|45|43  Elementos del vector
    }
}