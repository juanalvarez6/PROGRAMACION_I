#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Persona {
    string nombre;
    string apellido;
    int edad;
    double talla;
    bool sexo;
    vector<string> generosMusicales;
    vector<Persona> amigos;
};

void print(Persona p) {
    cout << "Datos de la persona" << endl;
    cout << "\tNombre: " << p.nombre << endl;
    cout << "\tApellido: " << p.apellido << endl;
    cout << "\tEdad: " << p.edad << endl;
    cout << "\tGenero: ";
    if (p.sexo) {
        cout << "Hombre" << endl;
    } else {
        cout << "Mujer" << endl;
    }
    cout << "\tGeneros musicales:"<< endl;
    for (int i = 0; i < p.generosMusicales.size(); i++) {
        cout << "\t\t"<< p.generosMusicales[i] << endl;
    }

}

void listar(vector<Persona> z) {
    cout << "Hay " << z.size() << " personas" << endl;
    for(int i = 0; i < z.size(); i++) {
        print(z[i]);
    }
}
int main()
{
    Persona p1;
    p1.nombre = "Anderson";
    p1.apellido = "Restrepo";
    p1.edad = 25;
    p1.talla = 1.63;
    p1.generosMusicales.push_back("Salsa");
    p1.generosMusicales.push_back("Balada anglo");
    p1.sexo = true;
   
    Persona p2;
    p2.nombre = "Andsf";
    p2.apellido = "Restasdfasdfrepo";
    p2.edad = 225;
    p2.talla = 2.63;
    p2.generosMusicales.push_back("Cumbia");
    p2.generosMusicales.push_back("Rock");
    p2.generosMusicales.push_back("Phonk");
    p2.sexo = false;
    vector<Persona> estudiantes;
    estudiantes.push_back(p1);
    estudiantes.push_back(p2);
    listar(estudiantes);
    //print(p1);
    //print(p2);
    return 0;
}