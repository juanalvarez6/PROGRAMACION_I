#include <iostream>

using namespace std;

/* 3) Escriba una función que dadas la base y la altura de un triangulo calcule su area */

float area(float a, float b) {
    float r = (a * b) / 2; 
    return r;
}

int main () {
	cout << area(0, 0) << endl;
}