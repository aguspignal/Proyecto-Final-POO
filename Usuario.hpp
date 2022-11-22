#ifndef USUARIO_H
#define USUARIO_H

#include<string>
#include <cstring>
using namespace std;

class Usuario {
	char nombre[60];
	char password[20];
	char email[50];
	int dni;
	int edad;
	int anio_ingreso;
	
public:
	Usuario(string nombre, string passowrd, string email, int dni, int edad, int anio);
	
	string getNombre();
	string getPassword();
	string getEmail();
	int getDNI();
	int getEdad();
	int getIngreso();
	
	void changePassword(string psw);
};

#endif
