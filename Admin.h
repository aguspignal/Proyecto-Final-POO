#ifndef ADMIN_H
#define ADMIN_H

class Admin : Usuario {
	
public:
	Admin(string nombre, int dni, int cod_usuario)
		: Usuario(nombre,dni,cod_usuario){
		admin = true
	}
	
	/// ...
};

#endif
