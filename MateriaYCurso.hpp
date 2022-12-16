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
};

// para mi queda medio croto el nombre si se te ocurre otro joya jajajaj
struct MateriaYCurso{
	NombreCurso curso;
	string materia;
};

struct NotaAlumno {
	char materia[30];
	float nota; 
};

#endif
