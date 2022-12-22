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
	char nombre[100];
	char password[50];
	char email[100];
	char dni[10];
	int edad; 
};

class Usuario {	
private:
  string m_nombre;
  string m_password;
  string m_email;
  string m_dni;
  int m_edad; 
  
public:
	Usuario(){};
	Usuario(string t_nombre, string t_passowrd, string t_email, 
			string t_dni, int t_edad);

  string getNombre();
  void setNombre(string n);
  
  string getPassword();
  void setPassword(string p);
  
  string getEmail();
  void setEmail(string e);
  
  string getDNI();
  void setDNI(string dni);
  
  int getEdad();
  void setEdad(int e);
  
	
  virtual bool leerUsuario()=0;
  virtual bool guardarUsuario()=0;
  
  /// Sobrecarga operador==
  bool operator==(Usuario *u1){
	  if(u1->getDNI() == this->m_dni){
		  return true;
	  } else {
		  return false;
	  }
  }
};


#endif
