#include "Docente.hpp"
#include <iostream>

Docente::Docente(string t_nombre, string t_passowrd, string t_email, int t_dni,
                 int t_edad)
    : Usuario(t_nombre, t_passowrd, t_email, t_dni, t_edad){};

void Docente::setCursoMateria(NombreCurso t_curso, string t_materia) {
  m_cursoMateriaACargo[t_curso] = t_materia;
}

void Docente::removeCursoMateria(map<NombreCurso, string> t_cursoMateria) {
  auto it = t_cursoMateria.begin();
  m_cursoMateriaACargo.erase(it);
}
