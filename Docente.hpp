#ifndef DOCENTE_H
#define DOCENTE_H

#include "Usuario.hpp"
#include "MateriaYCurso.hpp"
#include <iostream>

using namespace std;

class Docente : public Usuario {
private:
	int cant_materias;
   vector<CursoMateria> m_MateriasACargo; 
	
public:
	Docente(){};

  Docente(string t_nombre, string t_apellido, string t_passowrd, string t_email, string t_dni, int t_edad);
  
  vector<CursoMateria> getMateriasACargo();
  
  bool leerUsuario() override;
//   void setMateriasACargo(NombreCurso t_curso, string t_materia);
//   void removeMateriasACargo(map<NombreCurso, string> t_cursoMateria);
};

#endif
