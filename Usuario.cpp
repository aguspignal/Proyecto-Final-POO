#include <iostream>

#include "Usuario.h"
using namespace std;

/// Establecer los atributos basicos de cualquier usuario
Usuario::Usuario
	(string nombre, string password, string email, int dni, int edad, int anio){
	strcpy( this->nombre, nombre.c_str());
	strcpy( this->password, password.c_str());
	strcpy( this->email, email.c_str());
	this->dni = dni;
	this->edad = edad;
	this->anio_ingreso = anio;
}

/// Obtener nombre
string Usuario::getNombre(){
	string m_nombre = nombre;
	return m_nombre;
}

/// Obtener password
string Usuario::getPassword(){
	string psw = password;
	return psw;
}

/// Obtener email
string Usuario::getEmail(){
	string m_email = email;
	return m_email;
}

/// Obtener dni
int Usuario::getDNI(){
	return dni;
}

/// Obtener edad
int Usuario::getEdad(){
	return edad;
}

/// Obtener año de ingreso
int Usuario::getIngreso(){
	return anio_ingreso;
}

/// Cambiar contraseña
void Usuario::changePassword(string psw){
	strcpy(this->password,psw.c_str());
}


