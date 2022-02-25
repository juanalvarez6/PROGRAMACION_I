#include <iostream>

using namespace std;

int fib(int n) {
	if (n==0) {
		return 0;
	} else {
		if (n==1) {
			return 1;
		} else {
			int a = fib(n-1);
			int b = fib(n-2);
			return a + b;
		}
	}
}

int main () {
	int a = fib(2);
	cout << a << endl;
}