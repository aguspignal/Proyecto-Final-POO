#ifndef USUARIO_H
#define USUARIO_H

class Usuario {
	int cod_usuario;
	char nombre[50];
	int dni;
	bool admin;
public:
	Usuario(string nombre, int dni, int cod_usuario){
		this->nombre = nombre;
		this->cod_usuario = cod_usuario;
		this->dni = dni;
		admin = false;
	}
	
	int getCodUsuario();
	string getNombre();
	int getDNI();
	/// ...
};

#endif
