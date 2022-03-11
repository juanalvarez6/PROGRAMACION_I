#include <iostream>
#include <vector>

using namespace std;

// la anterior pero esta vez debe retorna el promedio

double vec_prom(vector <double> x){
    double suma = 0;
    for (int i=0; i < x.size();i++){
        suma += x[i];
    } 
    return suma / x.size();
}

int main () {
    vector <double> x {3.5, 3.4, 3.5, 5, 4};
	double a = vec_prom(x);
	cout << a;
}