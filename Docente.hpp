#ifndef DOCENTE_H
#define DOCENTE_H

#include "Usuario.hpp"
#include "MateriaYCurso.hpp"
#include <iostream>

using namespace std;

class Docente : public Usuario {
private:
   vector<MateriaYCurso> m_MateriasACargo; 
	
public:
// Constructor por defecto
  Docente(string t_nombre, string t_apellido, string t_passowrd, string t_email, int t_dni,
          int t_edad);
// Constructor que recibe el curso (dependiendo del archivo del cual se creo la instancia) y un vector con sus materias
  Docente(string t_nombre, string t_apellido, string t_passowrd, string t_email, int t_dni,
		  int t_edad, NombreCurso t_curso, vector<string> v);

  bool leerUsuario() override;
  
//   void setMateriasACargo(NombreCurso t_curso, string t_materia);
//   void removeMateriasACargo(map<NombreCurso, string> t_cursoMateria);
};

#endif
