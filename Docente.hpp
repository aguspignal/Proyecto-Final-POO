#ifndef DOCENTE_H
#define DOCENTE_H

#include "Usuario.hpp"
#include "Curso.hpp"
#include <iostream>
#include <map>
using namespace std;

class Docente : Usuario {
private:
	map<string, NombreCurso>cursos;
	
public:
	Docente(string nombre, string apellido, string email, 
			int dni, int edad);
	
};

#endif
