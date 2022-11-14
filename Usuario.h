#ifndef USUARIO_H
#define USUARIO_H

#include<string>
#include <cstring>
using namespace std;

class Usuario {
	int cod_usuario;
	char nombre[50];
	int dni;
	bool admin;
	
public:
	Usuario(std::string nombre, int dni, int cod_usuario){
		strcpy(this->nombre,nombre.c_str()); // transforma un string a char[]
		this->cod_usuario = cod_usuario;
		this->dni = dni;
		admin = false;
	}
	
	int getCodUsuario() { return cod_usuario; }
	void setCodUsuario(int cod) { cod_usuario = cod; }
	
	std::string getNombre() { return nombre; }
	void setNombre(string n) { strcpy(this->nombre,n.c_str()); }
	
	int getDNI() { return dni; }
	void setDNI(int dni) { this->dni = dni; }
	
	bool getAdmingStatus() { return admin; }
	void setAdminStatus(bool s) { admin = s; }
};

#endif
