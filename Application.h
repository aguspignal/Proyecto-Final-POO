#ifndef APPLICATION_H
#define APPLICATION_H

#include "Escuela.hpp"
#include <wx/app.h>

class Application : public wxApp {
private:
	Escuela *m_escuela;
	
public:
	virtual bool OnInit();
};

#endif
