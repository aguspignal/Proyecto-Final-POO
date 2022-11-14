#ifndef PACIENTE_H
#define PACIENTE_H
using namespace std;

class Paciente : public Usuario {
	char diagnostico[30];
	char med_responsable[50];
	char email[40];
	long telefono;
public:
	Paciente(std::string nombre, int dni, int cod_usuario, string diag, string med)
		: Usuario(nombre,dni,cod_usuario){
		strcpy(this->diagnostico,diag.c_str());
		strcpy(this->med_responsable,med.c_str());
	}
	
	std::string getDiagnostico();
	std::string getMedicoResp();
	std::string getEmail();
	std::string getTelefono();
	
	/// ...
};

#endif
