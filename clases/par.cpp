#include <iostream>

using namespace std;

bool espar(int a) {
    if (a % 2 == 0) return true;
    else return false;
}

int main () {
	cout << espar(53) << endl;
}

