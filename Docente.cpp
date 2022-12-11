#include "Docente.hpp"
#include <iostream>

Docente::Docente(string t_nombre, string t_passowrd, string t_email, int t_dni,
                 int t_edad, int t_anioIngreso)
    : Usuario(t_nombre, t_passowrd, t_email, t_dni, t_edad, t_anioIngreso){};

void Docente::setMateriaCurso(string t_materia, NombreCurso t_curso) {
  m_materiaCursoACargo[t_materia] = t_curso;
}
