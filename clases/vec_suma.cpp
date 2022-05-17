#include <iostream>
#include <vector>

using namespace std;

// Escriba una funcion que dado un vector de números retorne su suma.

int vec_suma(vector <int> x){
    int suma = 0;
    for (int i=0; i < x.size();i++) suma += x[i];
    return suma;
}

int main () {
	cout << vec_suma({1, 2, 3, 4}) << endl;
}