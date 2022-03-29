#include <iostream>
#include <string>

using namespace std;

string clasificar(int edad) {
    if (edad >= 0 && edad < 10) {
       return "1 niño";
   } else {
       if (edad >= 10 && edad < 18) {
           return "2 joven";
       } else {
           if (edad >= 18 && edad <= 60) {
               return "3 adulto";
           } else {
               if (edad >= 60) {
                    return "4 adulto mayor";
               } else {
                   return "Valor invalido";
               }
           }
       }
   }
}

int main() {
   // Procesamiento de los Datos
   cout << clasificar(45) << endl;
   cout << clasificar(12) << endl;
   cout << clasificar(18) << endl;
   return 0;
}