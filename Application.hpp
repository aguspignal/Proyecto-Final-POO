#ifndef APPLICATION_H
#define APPLICATION_H

#include "Escuela.hpp"
#include <wx/app.h>

class Application : public wxApp {
private:
	// Esta instancia de Escuela maneja TODOS los datos y esta viva SIEMPRE	junto con el programa
	Escuela *m_escuela;
	
public:
	virtual bool OnInit();
};

#endif
