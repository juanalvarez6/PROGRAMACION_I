#include <iostream>

using namespace std;

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
	int a = edad(87);
	cout << a << endl;
}