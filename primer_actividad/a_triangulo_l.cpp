#include <iostream>
#include <cmath>

using namespace std;

/* 4) Escriba una función que dadas la longitud de los lados de un triangulo calcule su area */

float area(float a, float b, float c) {
    float p = a + b + c;
    float s = p / 2;
    float area = sqrt(s * (s-a) * (s-b) * (s-c));

    return area;
}

int main () {
	cout << area(4, 5, 7) << endl;
}