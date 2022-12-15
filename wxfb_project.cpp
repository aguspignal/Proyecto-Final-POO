///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1-0-g8feb16b3)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "wxfb_project.h"

///////////////////////////////////////////////////////////////////////////

LoginFrame::LoginFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* main_layout;
	main_layout = new wxBoxSizer( wxVERTICAL );


	main_layout->Add( 0, 40, 0, 0, 5 );

	m_title = new wxStaticText( this, wxID_ANY, wxT("Nombre de la Institucion"), wxDefaultPosition, wxDefaultSize, 0 );
	m_title->Wrap( -1 );
	m_title->SetFont( wxFont( 18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Century Gothic") ) );

	main_layout->Add( m_title, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	main_layout->Add( 0, 30, 0, wxEXPAND, 5 );

	wxBoxSizer* box_dni;
	box_dni = new wxBoxSizer( wxVERTICAL );

	label_dni = new wxStaticText( this, wxID_ANY, wxT("DNI"), wxDefaultPosition, wxDefaultSize, 0 );
	label_dni->Wrap( -1 );
	box_dni->Add( label_dni, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	input_dni = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 150,-1 ), 0 );
	box_dni->Add( input_dni, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	main_layout->Add( box_dni, 0, wxALIGN_CENTER_HORIZONTAL, 5 );


	main_layout->Add( 0, 25, 0, wxEXPAND, 5 );

	wxBoxSizer* box_psw;
	box_psw = new wxBoxSizer( wxVERTICAL );

	label_psw = new wxStaticText( this, wxID_ANY, wxT("Contraseña"), wxDefaultPosition, wxDefaultSize, 0 );
	label_psw->Wrap( -1 );
	box_psw->Add( label_psw, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	input_psw = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 150,-1 ), 0 );
	box_psw->Add( input_psw, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	main_layout->Add( box_psw, 0, wxALIGN_CENTER_HORIZONTAL, 5 );


	main_layout->Add( 0, 45, 0, wxEXPAND, 5 );

	btn_ingresar = new wxButton( this, wxID_ANY, wxT("Ingresar"), wxDefaultPosition, wxDefaultSize, 0 );
	main_layout->Add( btn_ingresar, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	this->SetSizer( main_layout );
	this->Layout();

	this->Centre( wxBOTH );
}

LoginFrame::~LoginFrame()
{
}
