#include "Docente.hpp"
#include "MateriaYCurso.hpp"
#include <iostream>

// Constructor por defecto
Docente::Docente(string t_nombre,string t_apellido, string t_passowrd, string t_email, int t_dni,
                 int t_edad)
    : Usuario(t_nombre, t_passowrd, t_email, t_dni, t_edad){};

// Constructor que recibe el curso (dependiendo del archivo del cual se creo la instancia) y un vector con sus materias
Docente::Docente(string t_nombre, string t_apellido, string t_passowrd, string t_email, int t_dni,
				 int t_edad, NombreCurso t_curso, vector<string>v)
	: Usuario(t_nombre, t_passowrd, t_email, t_dni, t_edad){
	
	for(int i=0; i<v.size(); i++){
		MateriaYCurso n;
		n.curso = t_curso;
		n.materia = v[i];
		m_MateriasACargo.push_back(n);
	}
};

//void Docente::setMateriasACargo(NombreCurso t_curso, string t_materia) {
//  m_MateriasACargo[t_curso] = t_materia;
//}

//void Docente::removeMateriasACargo(map<NombreCurso, string> t_cursoMateria) {
//  auto it = t_cursoMateria.begin();
//  m_MateriasACargo.erase(it);
//}
