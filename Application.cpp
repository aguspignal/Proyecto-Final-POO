#include <wx/image.h>
#include "Application.h"
#include "Login.h"

IMPLEMENT_APP(Application)

bool Application::OnInit() {
	// Esta instancia de Escuela maneja TODOS los datos y esta viva SIEMPRE	junto con el programa
	m_escuela = new Escuela();
	
	wxInitAllImageHandlers();
	Login *win = new Login(m_escuela);
	win->Show();
	
	/// ... Codigo que se ejecuta al iniciar equivalente al main() ...
	
	return true;
}

