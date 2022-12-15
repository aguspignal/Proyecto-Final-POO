#ifndef USUARIO_H
#define USUARIO_H

#include "MateriaYCurso.hpp"

#include <cstring>
#include <string>
#include <vector>
#include <fstream>
#include <tuple>
using namespace std;

struct RegistroUsuario {
	char m_nombre[70];
	char m_password[20];
	char m_email[50];
	int m_dni;
	int m_edad;
};

class Usuario {	
  char m_nombre[70];
  char m_password[20];
  char m_email[50];
  int m_dni;
  int m_edad;
  char *m_anioIngreso;

public:
	Usuario(){};
	Usuario(string t_nombre, string t_passowrd, string t_email, int t_dni, int t_edad);

  string getNombre();
  void setNombre(string n);
  
  string getPassword();
  void setPassword(string p);
  
  string getEmail();
  void setEmail(string e);
  
  int getDNI();
  void setDNI(int dni);
  
  int getEdad();
  void setEdad(int e);
  
  char *getIngreso();

  void changePassword(string t_psw);
    
  // notar que recibe una instancia de ifstream no la ruta del archivo
  RegistroUsuario LeerUsuario(ifstream &archi, NombreCurso nombre_curso);
  
  /// Sobrecarga operador==
  bool operator==(Usuario u1){
	  if(u1.getDNI() == this->m_dni){
		  return true;
	  } else {
		  return false;
	  }
  }
};


#endif
