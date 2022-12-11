#ifndef DOCENTE_H
#define DOCENTE_H

#include "Curso.hpp"
#include "Usuario.hpp"
#include <iostream>
#include <map>

using namespace std;

class Docente : Usuario {
private:
  map<string, NombreCurso> m_materiaCursoACargo; // materia, curso

public:
  Docente(string t_nombre, string t_passowrd, string t_email, int t_dni,
          int t_edad, int t_anioIngreso);

  void setMateriaCurso(string t_materia, NombreCurso t_curso);
};

#endif
