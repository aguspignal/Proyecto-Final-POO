#ifndef USUARIO_H
#define USUARIO_H

#include <cstring>
#include <string>
#include <vector>

using namespace std;

struct RegistroUsuario {
	char m_nombre[70];
	char m_password[20];
	char m_email[50];
	int m_dni;
	int m_edad;
};

class Usuario {	
  char m_nombre[50];
  char m_apellido[50];
  char m_password[20];
  char m_email[50];
  int m_dni;
  int m_edad;
  char *m_anioIngreso;

public:
  Usuario(string t_nombre, string t_apellido, string t_passowrd, string t_email, int t_dni,
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
