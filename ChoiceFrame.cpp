#include "ChoiceFrame.h"
#include "string_conv.h"

ChoiceFrame::ChoiceFrame(Escuela *escuela) 
	: BaseChoiceFrame(nullptr), m_escuela(escuela) {
	
}

ChoiceFrame::~ChoiceFrame() {
	
}

void ChoiceFrame::IngresarComoAlumno( wxCommandEvent& event )  {
	int choice = 1;
	string log_dni = wx_to_std(input_DNI->GetValue());
	string log_psw = wx_to_std(input_Psw->GetValue());
	
	bool result;
	Usuario *alumno = new Alumno;
	
	tie(alumno,result) = m_escuela->AutenticarDatosLogin(choice,log_dni,log_psw);
	if(result){
		/// llama a la siguiente ventana
	} else {
		/// lama a una ventana emergente con mensaje de error
	}
 }

void ChoiceFrame::IngresarComoDocente( wxCommandEvent& event )  {
	int choice = 2;
	string log_dni = wx_to_std(input_DNI->GetValue());
	string log_psw = wx_to_std(input_Psw->GetValue());
	
	bool result;
	Usuario *docente = new Docente;
	
	tie(docente,result) = m_escuela->AutenticarDatosLogin(choice,log_dni,log_psw);
	if(result){
		/// llama a la siguiente ventana
	} else {
		/// lama a una ventana emergente con mensaje de error
	}
}

