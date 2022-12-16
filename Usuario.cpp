#include "Usuario.hpp"
#include "MateriaYCurso.hpp"
#include <ctime>
#include <iostream>

using namespace std;

Usuario::Usuario(string t_nombre, string t_password, string t_email, int t_dni,
                 int t_edad) {
  strcpy(m_nombre, t_nombre.c_str());
  strcpy(m_password, t_password.c_str());
  strcpy(m_email, t_email.c_str());
  m_dni = t_dni;
  m_edad = t_edad;
}

/// Operaciones con Nombre
string Usuario::getNombre() { return m_nombre; }

void Usuario::setNombre(string n){
	strcpy(this->m_nombre,n.c_str());
}

/// Operaciones con Password
string Usuario::getPassword() { return m_password; }

void Usuario::setPassword(string p){
	strcpy(this->m_password,p.c_str());
}

/// Operaciones con Email
string Usuario::getEmail() { return m_email; }

void Usuario::setEmail(string e){
	strcpy(this->m_email,e.c_str());
}

/// Operaciones con DNI
int Usuario::getDNI() { return m_dni; }

void Usuario::setDNI(int dni){
	this->m_dni = dni;
}

/// Operaciones con Edad
int Usuario::getEdad() { return m_edad; }

void Usuario::setEdad(int e){
	this->m_edad = e;
}





