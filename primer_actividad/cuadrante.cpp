#include <iostream>

using namespace std;

/* 2) Escriba una función, que dados los componenttes horizontal y vertical de un punto en dos dimensiones, retorne 
el cuadrante en esl que se encuentra */

int cuadrante(int x, int y) {
    if (x >= 0 && y >= 0) {
        return 1;
    }else {
        if (x < 0 && y >= 0){
            return 2;
        }else {
            if (x < 0 && y < 0){
                return 3;
            }else {
                if (x >= 0 && y < 0) {
                    return 4;
                }else {
                    return 0;
                }
            }
        }
    }
}

int main () {
	int a = cuadrante(95, 32);
	cout << a << endl;
}