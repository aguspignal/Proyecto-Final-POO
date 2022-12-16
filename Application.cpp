#include <wx/image.h>
#include "Application.h"
#include "Login.h"

IMPLEMENT_APP(Application)

bool Application::OnInit() {
	m_escuela = new Escuela();
	
	wxInitAllImageHandlers();
	Login *win = new Login(m_escuela);
	win->Show();
	
	return true;
}

