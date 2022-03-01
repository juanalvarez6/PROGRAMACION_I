#include <iostream>

using namespace std;
// Retorna si y es un divisor de x.
// y es divisor de x si y solo si y divide exactamente a x.
bool esDivisor(int x, int y) {
  if (x % y == 0) {
    return true;
  } else {
    return false;
  }
}