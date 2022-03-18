#include <iostream>

using namespace std;

/* 6) Escribir un programa que reciva el número de un mes y retorne una cadena de 
caracteres con su nombre. Ejemplo, para 4 retorna "Abril".*/

string mes(int x){
    string a = "Enero", b = "Febrero", c = "Marzo", d = "Abril", e = "Mayo", f = "Junio", g = "Julio", h = "Agosto",
    i = "Septiembre", j = "Octubre", k = "Noviembre", l = "Diciembre";

    if (x == 1){
        return a;
    }else {
        if (x == 2){
            return b;
        }else {
            if (x == 3){
                return c;
            }else {
                if (x == 4){
                    return d;
                }else {
                    if (x == 5){
                        return e;
                    }else {
                        if (x == 6){
                            return f;
                        }else {
                            if (x == 7){
                                return g;
                            }else {
                                if (x == 8){
                                    return h;
                                }else {
                                    if (x == 9){
                                        return i;
                                    }else {
                                        if (x == 10){
                                            return j;
                                        }else {
                                            if (x == 11){
                                                return k;
                                            }else {
                                                if (x == 12){
                                                    return l;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

int main(){
    cout << mes(1) << endl;
}