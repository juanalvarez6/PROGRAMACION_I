#include <iostream>
#include <vector>

using namespace std;

// dado un vector de numeros me devuelva el mayor

int maximo(vector<int> z){
    int mayor = z[0];
    for (int a = 1; a < z.size(); a++)
        if (z[a] > mayor) mayor = z[a];
    return mayor;
}

int main () {
	cout << maximo({1,2,3,4}) << endl;
}