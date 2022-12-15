#include "Usuario.hpp"
#include "MateriaYCurso.hpp"
#include <ctime>
#include <iostream>

using namespace std;

// Establecer los atributos basicos de cualquier usuario
Usuario::Usuario(string t_nombre, string t_password, string t_email, int t_dni,
                 int t_edad) {
  strcpy(m_nombre, t_nombre.c_str());
  strcpy(m_password, t_password.c_str());
  strcpy(m_email, t_email.c_str());
  m_dni = t_dni;
  m_edad = t_edad;

  time_t timer = time(0);
  char *fechaActual = ctime(&timer);

  m_anioIngreso = fechaActual;
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

char *Usuario::getIngreso() { return m_anioIngreso; }

void Usuario::changePassword(string t_psw) {
  strcpy(m_password, t_psw.c_str());
}

/// Leer un usuario desde el binario *Solo los datos de RegistroUsuario*
RegistroUsuario Usuario::LeerUsuario(ifstream &archi, NombreCurso nombre_curso){
	
	char tipoUsuario[7];
	archi.read(reinterpret_cast<char*>(&tipoUsuario),sizeof(tipoUsuario));
	
	RegistroUsuario r;
	archi.read(reinterpret_cast<char*>(&r),sizeof(r));
	
	return r;
}




