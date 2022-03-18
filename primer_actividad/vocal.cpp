#include <iostream>

using namespace std;

/* 5)Escriba un programa que dada una letra retorne 1 si es vocal ó 0 si es consonante. */

int esvocal(char a){
    switch (a){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        return 1;
        break;
    default:
        return 0;
    }
}

int main () {
	cout << esvocal('a') << endl;
}