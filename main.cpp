#include<iostream>
#include<vector>
using namespace std;

class Clinica {
  vector<Usuario>lista_usuarios; 
  /// en realidad seria vector de medicos y pacientes
  /// Usuario seria una clase abstracta y aca entra polimorfismo (?
};


class Usuario {
    int cod_usuario;
    char nombre[50];
    int dni;
    bool admin;
public:
    Usuario(string nombre, int dni, int cod_usuario){
      this->nombre = nombre;
      this->cod_usuario = cod_usuario;
      this->dni = dni;
      admin = false;
    }
    
    int getCodUsuario(){ return cod_usuario; }
    string getNombre(){ return to_string(nombre); }
    int getDNI(){ return dni; }
};


class Admin : Usuario {
    
public:
    Admin(string nombre, int dni, int cod_usuario) 
     : Usuario(nombre,dni,cod_usuario){
        admin = true
     }
  
};


class Medico : public Admin {
    char especializacion[30];
    vector<Paciente>pacientes_atendidos;
public:
    Medico(string nombre, int dni, int cod_usuario, string espec)
      : Usuario(nombre,dni,cod_usuario){
        especializacion = espec;
    }
};


class Paciente : public Usuario {
    char diagnostico[30];
    char med_responsable[50];
public:
    Medico(string nombre, int dni, int cod_usuario, string diag, string med)
      : Usuario(nombre,dni,cod_usuario){
        
        diagnostico = diag;
        med_responsable = med;
        admin = true;
    }
};

int main(){
  
  
  return 0;
}