#include "Usuario.hpp"
#include "MateriaYCurso.hpp"
#include <ctime>
#include <iostream>

using namespace std;

Usuario::Usuario(string t_nombre, string t_password, string t_email, string t_dni,int t_edad) {
  m_nombre = t_nombre;
  m_password = t_password;
  m_email = t_email;
  m_dni = t_dni;
  m_edad = t_edad;
}

void Usuario::setData(string n, string p, string em, string dni, int e){
	setNombre(n);
	setPassword(p);
	setEmail(em);
	setDNI(dni);
	setEdad(e);
}

/// Operaciones con Nombre
string Usuario::getNombre() { return m_nombre; }

void Usuario::setNombre(string n){
	this->m_nombre = n;
}

/// Operaciones con Password
string Usuario::getPassword() { return m_password; }

void Usuario::setPassword(string p){
	this->m_password = p;
}

/// Operaciones con Email
string Usuario::getEmail() { return m_email; }

void Usuario::setEmail(string e){
	this->m_email = e;
}

/// Operaciones con DNI
string Usuario::getDNI() { return m_dni; }

void Usuario::setDNI(string dni){
	this->m_dni = dni;
}

/// Operaciones con Edad
int Usuario::getEdad() { return m_edad; }

void Usuario::setEdad(int e){
	this->m_edad = e;
}





