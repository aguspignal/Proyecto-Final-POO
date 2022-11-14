#ifndef PACIENTE_H
#define PACIENTE_H

class Paciente : public Usuario {
	char diagnostico[30];
	char med_responsable[50];
public:
	Medico(string nombre, int dni, int cod_usuario, string diag, string med)
		: Usuario(nombre,dni,cod_usuario){
		diagnostico = diag;
		med_responsable = med;
		admin = true;
	}
	
	/// ...
};

#endif
