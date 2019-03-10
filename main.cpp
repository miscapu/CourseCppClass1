//incluindo bibliotecas
#include<iostream>
#include<stdlib.h>
using namespace std;

class Persona{
private://declarando atributos
    int edad;
    string nombre;
public://declarando métodos
    Persona(int,string);
    void leer();
    void correr();
};
//inciando método constructor
Persona::Persona(int _edad, string _nombre) {
    edad = _edad;
    nombre = _nombre;
}

void Persona::correr() {
    cout << "Yo soy " << nombre << " y tengo " << " años; me gusta correr!" << endl;
}

void Persona::leer() {
    cout << "Yo soy " << nombre << " y tengo " << " años; me gusta leer!" << endl;
}

int main(){
    Persona p1 = Persona(20,"Miguel");
    p1.leer();
    p1.correr();
    return 0;
}