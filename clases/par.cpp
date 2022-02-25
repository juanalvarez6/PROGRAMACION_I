#include <iostream>

using namespace std;

bool espar(int a) {
    if (a % 2 == 0) {
        return true;
    } else {
        return false;
    }
}

int main () {
	int a = espar(53);
	cout << a << endl;
}

