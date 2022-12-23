///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1-0-g8feb16b3)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "wxfb_project.h"

///////////////////////////////////////////////////////////////////////////

BaseChoiceFrame::BaseChoiceFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxVERTICAL );

	txt_Institucion = new wxStaticText( this, wxID_ANY, wxT("Nombre de la Institucion"), wxDefaultPosition, wxDefaultSize, 0 );
	txt_Institucion->Wrap( -1 );
	bSizer4->Add( txt_Institucion, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer4->Add( 0, 0, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxVERTICAL );

	txt_DNI = new wxStaticText( this, wxID_ANY, wxT("DNI"), wxDefaultPosition, wxDefaultSize, 0 );
	txt_DNI->Wrap( -1 );
	bSizer6->Add( txt_DNI, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	input_DNI = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer6->Add( input_DNI, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer9->Add( bSizer6, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxVERTICAL );

	txt_Psw = new wxStaticText( this, wxID_ANY, wxT("Password"), wxDefaultPosition, wxDefaultSize, 0 );
	txt_Psw->Wrap( -1 );
	bSizer8->Add( txt_Psw, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	input_Psw = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer8->Add( input_Psw, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer9->Add( bSizer8, 0, wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer4->Add( bSizer9, 0, wxEXPAND, 5 );


	bSizer4->Add( 0, 0, 1, wxEXPAND, 5 );

	txt_IngresarComo = new wxStaticText( this, wxID_ANY, wxT("Ingresar como: "), wxDefaultPosition, wxDefaultSize, 0 );
	txt_IngresarComo->Wrap( -1 );
	bSizer4->Add( txt_IngresarComo, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxHORIZONTAL );

	btn_Alumno = new wxButton( this, wxID_ANY, wxT("Alumno"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer5->Add( btn_Alumno, 1, wxALL, 5 );

	btn_Docente = new wxButton( this, wxID_ANY, wxT("Docente"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer5->Add( btn_Docente, 1, wxALL, 5 );


	bSizer4->Add( bSizer5, 0, wxEXPAND, 5 );


	bSizer4->Add( 0, 0, 1, wxEXPAND, 5 );


	bSizer4->Add( 0, 0, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer4 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	btn_Alumno->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseChoiceFrame::IngresarComoAlumno ), NULL, this );
	btn_Docente->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseChoiceFrame::IngresarComoDocente ), NULL, this );
}

BaseChoiceFrame::~BaseChoiceFrame()
{
	// Disconnect Events
	btn_Alumno->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseChoiceFrame::IngresarComoAlumno ), NULL, this );
	btn_Docente->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseChoiceFrame::IngresarComoDocente ), NULL, this );

}
