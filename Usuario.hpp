#ifndef USUARIO_H
#define USUARIO_H

#include<string>
#include <cstring>
#include <ctime>
using namespace std;

class Usuario {
private:
	char nombre[60];
	char password[20];
	char email[50];
	int dni;
	int edad;
	char* anio_ingreso; // fecha de registro
	
public:
	Usuario(string nombre, string passowrd, string email, int dni, int edad);
	
	string getNombre();
	string getPassword();
	string getEmail();
	int getDNI();
	int getEdad();
	char* getIngreso();
	
	void changePassword(string psw);
};

#endif
