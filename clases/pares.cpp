#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;
    int s = 0;
    for (int i = 0; i <= a; i= i+2) {
        s = s + i; 
    }
    cout << s << endl;
}