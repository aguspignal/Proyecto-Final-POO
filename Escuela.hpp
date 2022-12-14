#ifndef ESCUELA_H
#define ESCUELA_H

#include "Curso.hpp"

#include <string>
#include <vector>
#include <tuple>
using namespace std;

/** 
 Clase que va a tener una instancia viva mientras el programa este abierto
 La idea es que maneje todo el flujo de datos( Cargar el/los cursos, escuchar los eventos, etc)
 Sino tendriamos que dejarle todo a la clase Curso, inviable
**/
class Escuela {
private:
	vector<Curso>m_cursos; // en duda aun
	
public:
	Escuela(){};
	
	tuple<Usuario*,bool> AutenticarDatosLogin(int choice, string log_dni, string log_password);
};

#endif
