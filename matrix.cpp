#include <iostream>
#include <vector>
#include <array>

using namespace std;

using matrix = vector <vector<int>>;

void print(matrix x){
    int filas = x.size();
    int columnas = x[0].size();
    for(int f=0; f<filas; f++){ //incremento de filas
        for(int c=0; c<columnas; c++){//incremento de columnas
            cout << x[f][c] << " ";
        }
    }
    cout << endl;
}

matrix crear(int filas, int columnas){ // CREA UNA MATRIX
    matrix m;
    vector <int> f(columnas, 0);
    for(int i =0; i<filas; i++){
        m.push_back(f);
    }
    return m;
}

matrix suma(matrix a, matrix b){ //SUMA DE MATRICES
    int filas = a.size();
    int columnas = a[0].size();
    matrix resultado = crear(filas, columnas);
    for(int f=0; f<filas; f++){ // Incremento de filas
        for(int c=0; c<columnas; c++){  // Incremento de columnas
            resultado[f][c] = a[f][c] + b[f][c];
        }
    }
    return resultado;
}

matrix producto(matrix a, matrix b){ //PRODUCTO DE MATRICES
    int filas = a.size();
    int columnas = a[0].size();
    matrix resultado = crear(filas, columnas);
    for(int f=0; f<filas; f++){ // Incremento de filas
        for(int c=0; c<columnas; c++){  // Incremento de columnas
            resultado[f][c] = a[f][c] * b[f][c];
        }
    }
    return resultado;
}

int main(){
    matrix m{{1,2,3},
             {4,5,6}};
             
    matrix n{{7,8,9},
             {1,2,3}};
    
    print(producto(m,n));
    //print(m);
    //cout << endl;
    //matrix s = suma(m,n);
    //print(s);
}