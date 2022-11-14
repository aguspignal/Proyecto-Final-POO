#ifndef MEDICO_H
#define MEDICO_H

#include <vector>
using namespace std;

class Medico : public Admin {
	char especializacion[30];
//	vector<Paciente>pacientes_atendidos;
public:
	Medico(std::string nombre, int dni, int cod_usuario, string espec)
		: Admin(nombre,dni,cod_usuario){
		strcpy(this->especializacion,espec.c_str());
	}
	
	string getEspecializacion();
	
	/// ...
};



#endif
