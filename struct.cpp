#include <iostream>
#include <vector>

using namespace std;

struct Persona {
    string nombre;
    string apellido;
    int edad;
    double talla;
    bool sexo;
    vector <string> generosMusicales;
    vector <string> amigos;
};

void print(Persona p){
    cout << "Datos de la persona" << endl;
    cout << "\tNombre: " << p.nombre <<endl;
    cout << "\tApellido: " << p.apellido << endl;
    cout << "\tEdad: " << p.edad << endl;
    if(p.sexo){
        cout << "\tHombre" << endl;
    }else{
        cout << "\tMujer" << endl;
    }
    cout << "\tGeneros Musicales : " << endl;
    for(int i=0; i < p.generosMusicales.size();i++){
        cout << "\t\t" << p.generosMusicales[i] << endl; 
    }
}

void listar(vector<Persona> z){
    cout << "Hay " << z.size() << " personas" << endl;
    for(int i=0;i<z.size();i++){
        print(z[i]);
    }
}

int main()
{
    Persona p1;
    p1.nombre = "Juan";
    p1.apellido = "Manuel";
    p1.edad = 19;
    p1.talla = 1.63;
    p1.sexo = true;
    p1.generosMusicales.push_back("Salsa");
    p1.generosMusicales.push_back("Cumbia");
    p1.generosMusicales.push_back("Despecho");
    
    Persona p2;
    p2.nombre = "Anderson";
    p2.apellido = "Restrepo";
    p2.edad = 25;
    p2.talla = 1.63;
    p2.generosMusicales.push_back("Salsa");
    p2.generosMusicales.push_back("Cumbia");
    p2.generosMusicales.push_back("Despecho");
    p2.sexo = false;
    
    vector <Persona> estudiantes;
    estudiantes.push_back(p1);
    estudiantes.push_back(p2);
    listar(estudiantes);
    
    //print(p2);
    

    return 0;
}