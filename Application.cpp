#include <wx/image.h>
#include "Application.hpp"
#include "ChoiceFrame.h"

IMPLEMENT_APP(Application)

bool Application::OnInit() {
	m_escuela = new Escuela();
	
	wxInitAllImageHandlers();
	ChoiceFrame *win = new ChoiceFrame(m_escuela);
	win->Show();
	
	return true;
}

