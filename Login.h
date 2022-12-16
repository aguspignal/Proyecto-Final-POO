#ifndef LOGIN_H
#define LOGIN_H
#include "Escuela.hpp"
#include "wxfb_project.h"

class Login : public LoginFrame {
private:
	
protected:
	Escuela *m_escuela;
	
public:
	Login(Escuela *escuela);
	~Login();
};

#endif

