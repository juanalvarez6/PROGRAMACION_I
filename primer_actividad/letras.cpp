#include <iostream>

using namespace std;

/* 5)Escriba un programa que dada una letra retorne 1 si es vocal ó 0 si es consonante. */

int esvocal(char a) {
    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A' || a == 'E'
    || a == 'I' || a == 'O' || a == 'U') {
        return 1;
    }else {
        return 0;
    }
}

int main () {
	cout << esvocal('s') << endl;
}