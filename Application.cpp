#include <wx/image.h>
#include "Application.h"
#include "WinExample.h"

IMPLEMENT_APP(Application)

bool Application::OnInit() {
	wxInitAllImageHandlers();
	WinExample *win = new WinExample(NULL);
	win->Show();
	
	/// ... 
	/// esto seria el equivalente a lo que va en el main()
	/// todo el codigo que se ejecuta al inicio de la app 
	/// ...
	
	return true;
}

