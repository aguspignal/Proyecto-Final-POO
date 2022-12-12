#include "Usuario.hpp"
#include <ctime>
#include <iostream>

using namespace std;

// Establecer los atributos basicos de cualquier usuario
Usuario::Usuario(string t_nombre, string t_apellido, string t_password, string t_email, int t_dni,
                 int t_edad) {
  strcpy(m_nombre, t_nombre.c_str());
  strcpy(m_apellido, t_apellido.c_str());
  strcpy(m_password, t_password.c_str());
  strcpy(m_email, t_email.c_str());
  m_dni = t_dni;
  m_edad = t_edad;

  time_t timer = time(0);
  char *fechaActual = ctime(&timer);

  m_anioIngreso = fechaActual;
}

string Usuario::getNombre() { return m_nombre; }

string Usuario::getPassword() { return m_password; }

string Usuario::getEmail() { return m_email; }

int Usuario::getDNI() { return m_dni; }

int Usuario::getEdad() { return m_edad; }

char *Usuario::getIngreso() { return m_anioIngreso; }

void Usuario::changePassword(string t_psw) {
  strcpy(m_password, t_psw.c_str());
}
