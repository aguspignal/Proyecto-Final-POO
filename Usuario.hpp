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
	char nombre[70];
	char password[20];
	char email[50];
	int dni;
	int edad;
};

/**
 Lo mejor va a ser que Usuario sea abstracta, cada vez que creemos una instancia va a tener que ser
 Usuario *u = new Alumno/Docente( argumentos )
 Puesto que Usuario no representa a nadie en si mismo y a parte nos sirve para algun que otro
 metodo como LeerUsuario()
**/

class Usuario {	
private:
  char m_nombre[70];
  char m_password[20];
  char m_email[50];
  int m_dni;
  int m_edad; 
  // Borro fecha de ingreso porque no andaria. Se estaria guardando la fecha en la que
  // se inicio el programa todas las veces, no en la que la persona fue registrada

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
  
	
  virtual bool leerUsuario()=0;
  
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
