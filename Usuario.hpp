#ifndef USUARIO_H
#define USUARIO_H

#include <cstring>
#include <string>
#include <vector>

using namespace std;

struct NombreCurso {
	int anio;
	char division;
	
	bool operator<(NombreCurso c){
		if(anio == c.anio){
			return division < c.division;
		} else {
			return anio < c.anio;
		}
	}
};

struct RegistroUsuario {
	char m_nombre[60];
	char m_password[20];
	char m_email[50];
	int m_dni;
	int m_edad;
};

class Usuario {
  char m_nombre[60];
  char m_password[20];
  char m_email[50];
  int m_dni;
  int m_edad;
  char *m_anioIngreso;

public:
  Usuario(string t_nombre, string t_passowrd, string t_email, int t_dni,
          int t_edad);

  string getNombre();
  string getPassword();
  string getEmail();
  int getDNI();
  int getEdad();
  char *getIngreso();

  void changePassword(string t_psw);
};

#endif
