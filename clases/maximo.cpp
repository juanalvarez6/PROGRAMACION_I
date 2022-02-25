#include <iostream>
using namespace std;

int maximo(int a, int b, int c) {
	if ((a > b) and (a > c)) {
	    return a;
	} else {
	    if ((b > a) and (b > c)) {
	        return b;
	    } else {
	        if ((c > a) and (c > b)) {
	            return c;
	        }else{
	            return a;
	        }
	    }
	}
}

int main () {
	int a = maximo(3, 5, 4);
	cout << a << endl;
}