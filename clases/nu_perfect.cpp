#include <iostream>
#include <vector>

using namespace std;

bool perfect(int a){
    int s = 1;
    for (int i = 2; i <= a / 2; i++){
        if (a % i == 0) s = s + i; 
    }    
    if (s == a) return true;
    else return false;
}

/*hacer una funcion que nos calcule los n numeros perfectos*/