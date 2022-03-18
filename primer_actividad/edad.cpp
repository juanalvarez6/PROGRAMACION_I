#include <iostream>

using namespace std;

/* 1)Escriba una función que dada la edad en años de una persona determine:
1) Si es niño [0,10) años, 
2) Si es joven [10,18) años,
3) Si es adulto [18,60] años,
4) Si es adulto mayor [60,...] años */

int edad(int a) {
    if (a >= 0 &&  a < 10) {
        return 1;
    }else {
        if (a >= 10 && a < 18) {
            return 2;
        }else {
            if (a >= 18 && a <= 60) {
                return 3;
            }else {
                if (a > 60) {
                    return 4;
                }else {
                    return 0;
                }
            }
        }
    }

}

int main () {
	cout << edad(87) << endl;
}