#include "Usuario.hpp"
#include <iostream>

using namespace std;

/// Establecer los atributos basicos de cualquier usuario
Usuario::Usuario(string nombre, string password, string email, int dni, int edad) {
  strcpy(this->nombre, nombre.c_str());
  strcpy(this->password, password.c_str());
  strcpy(this->email, email.c_str());
  this->dni = dni;
  this->edad = edad;
  
  // toma la fecha y hora actual por ej Jueves 24 Nov 2022 00:26:35
  time_t timer = time(0);
  char* fechaActual = ctime(&timer);
  this->anio_ingreso = fechaActual;
}

/// Obtener nombre
string Usuario::getNombre() {
  string m_nombre = nombre;
  return m_nombre;
}

/// Obtener password
string Usuario::getPassword() {
  string psw = password;
  return psw;
}

/// Obtener email
string Usuario::getEmail() {
  string m_email = email;
  return m_email;
}

/// Obtener dni
int Usuario::getDNI() { return dni; }

/// Obtener edad
int Usuario::getEdad() { return edad; }

/// Obtener a�o de ingreso
char* Usuario::getIngreso() { return anio_ingreso; }

/// Cambiar contrase�a
void Usuario::changePassword(string psw) {
  strcpy(this->password, psw.c_str());
}
