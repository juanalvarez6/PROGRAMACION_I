#include <iostream>
#include <vector>

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
    vector <int> a;
    int f = 0;
    for (int i=1; i<10000; i++){
        bool p = esperfecto(i);
        if (p == 1)
            a.push_back(i);
    }
    for (int i=0; i<a.size();i++)
            cout << a[i] << endl;
}