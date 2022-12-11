#ifndef DOCENTE_H
#define DOCENTE_H

#include "Curso.hpp"
#include "Usuario.hpp"
#include <iostream>
#include <map>

using namespace std;

class Docente : public Usuario {
private:
  map<NombreCurso, string> m_cursoMateriaACargo; // materia, curso

public:
  Docente(string t_nombre, string t_passowrd, string t_email, int t_dni,
          int t_edad, int t_anioIngreso);

  void setCursoMateria(NombreCurso t_curso, string t_materia);

  void removeCursoMateria(map<NombreCurso, string> t_cursoMateria);
};

#endif
