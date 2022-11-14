#ifndef MEDICO_H
#define MEDICO_H

class Medico : public Admin {
	char especializacion[30];
	vector<Paciente>pacientes_atendidos;
public:
	Medico(string nombre, int dni, int cod_usuario, string espec)
		: Usuario(nombre,dni,cod_usuario){
		especializacion = espec;
	}
	
	/// ...
};

#endif
