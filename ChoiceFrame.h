#ifndef CHOICEFRAME_H
#define CHOICEFRAME_H

#include "wxfb_project.h"
#include "Escuela.hpp"

class ChoiceFrame : public BaseChoiceFrame {
	
private:
	
protected:
	void IngresarComoAlumno( wxCommandEvent& event )  override;
	void IngresarComoDocente( wxCommandEvent& event )  override;
	Escuela *m_escuela;
	
public:
	ChoiceFrame(Escuela *m_escuela);
	~ChoiceFrame();
};

#endif

