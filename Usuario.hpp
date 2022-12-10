#ifndef USUARIO_H
#define USUARIO_H

#include <cstring>
#include <string>

using namespace std;

class Usuario {
  char m_nombre[60];
  char m_password[20];
  char m_email[50];
  int m_dni;
  int m_edad;
  int m_anioIngreso;

public:
  Usuario(string t_nombre, string t_passowrd, string t_email, int t_dni,
          int t_edad, int t_anio);

  string getNombre();
  string getPassword();
  string getEmail();
  int getDNI();
  int getEdad();
  int getIngreso();

  void changePassword(string t_psw);
};

#endif
