#include <string>
#include <vector>
#include <iostream>

using namespace std;

string gen_random(const int len) {
    static const char alphanum[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";
    string tmp_s;
    tmp_s.reserve(len);

    for (int i = 0; i < len; ++i) {
        tmp_s += alphanum[rand() % (sizeof(alphanum) - 1)];
    }
    return tmp_s;
}

double randf(double min, double max) {
    double f = (double)rand() / RAND_MAX;
    return min + f * (max - min);
}

struct Student {
    string name;  // nombre del estudiante
    int id;       // cedula
    vector<double> notas; // notas
    double definitiva;
};

// Dado un vector con estudiantes calcular su longitud
int numeroDeEstudiantes(vector<Student> s) {
    return s.size();
}

int estudiantesPorlomenos10notas(vector<Student> s) {
    int resultado = 0;    
    for(int i = 0; i < s.size(); i++) {
        if (s[i].notas.size() >= 10) {
            resultado++;
        }
    }
    return resultado;
}

// 1. Hacer una función que calcule la definitiva de cada estudiante y actualice su
// valor en el campo definitiva. Debe retornar el nuevo vector de estudiantes.
double definitiva(vector <double> x){
    double suma = 0;
    for (int i=0; i < x.size();i++) suma += x[i];
    return suma/x.size();
}

void datosEstudiante(vector <Student> s){
    for(int i=0;i<s.size();i++){
        cout << "Nombre: " << s[i].name << endl;
        cout << "Identificacion: " << s[i].id << endl;
        cout << "Notas: |";
        for(int j=0;j<s[i].notas.size();j++){
        cout << s[i].notas[j] << "|";
    }
    cout << "\nDefinitiva: " << definitiva(s[i].notas) << "\n\n";
    }
}

void print(vector <double> v){
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

// 2. Hacer una función que calcule cuantos estudiantes deben habilitar la materia.

// 3. Hacer una funcion que calcule los estudiantes excelentes! del curso: Notas entre
//  4.5 y 5.

// 4. Hacer una función que calcule cuantos estudiantes ganaron la materia.

// 5. Hacer una función que calcule cuantas notas tiene el estudiante que mas notas tiene.

// 6. Hacer una función que calcule la diferencia entre el estudiante que mas notas tiene y
// el estudiante que menos notas tiene.

// 7. Hacer una función que calcule cuantas notas tiene el estudiante que tiene el nombre mas largo.

// 8. Hacer una función que calcule cuantos estudiantes asiaticos hay. Los nombres asiaticos
// tienen hasta 4 caracteres y solo una vocal.

int main() {
    vector<Student> estudiantes;
   
    for(int i = 0; i < 5; i++) {
        Student s;
        s.name = gen_random(10);
        s.id = 123456;
        int numnotas = rand()%20;
        for(int j = 0; j < numnotas; j++) {
            s.notas.push_back(randf(0.5,4.5));
        }
        estudiantes.push_back(s);
    }

    datosEstudiante(estudiantes);


    cout << numeroDeEstudiantes(estudiantes) << endl;
    cout << estudiantesPorlomenos10notas(estudiantes) << endl;
    /*
    s.notas.push_back(3.5);
    s.notas.push_back(2.0);
    s.notas.push_back(0.5);

    cout << gen_random(6) << endl;
    cout << randf(0.0,5.0) << endl;
*/  
   
    return 0;
}