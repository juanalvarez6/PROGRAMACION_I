#include <iostream>

using namespace std;

bool esDivisor(int x, int y) {
  if (x % y == 0) 
    return true;
  else
    return false;
}

bool esperfecto(int x){
    int suma = 1;
    for (int i = 2; i <= x/2; i++){
        if(esDivisor(x,i))
            suma = suma + i;
    }
    if (suma == x)
        return true;
    else 
        return false;
}

int main(){
    bool a = esperfecto(6);
    cout << a << endl;
}