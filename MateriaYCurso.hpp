#ifndef MATERIAYCURSO_H
#define MATERIAYCURSO_H
#include <string>
using namespace std;

struct NombreCurso {
	int anio;
	char division;
	
	bool operator<(NombreCurso c){
		if(anio == c.anio){
			return division < c.division;
		} else {
			return anio < c.anio;
		}
	}
	
	bool operator==(NombreCurso c){
		if(anio == c.anio && division == c.division){
			return true;
		} else { return false; }
	}
};

struct CursoMateria {
	int anio;
	string materia;
};

struct NotaAlumno {
	char materia[30];
	float nota; 
};

#endif
