#include <iostream>
using namespace std;

int max2(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int max3(int a, int b) {
    int m = max2(max2(3,5), 4);
    return m;
}