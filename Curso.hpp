#ifndef CURSO_H
#define CURSO_H

#include "Alumno.hpp"
#include "Docente.hpp"
#include <list>
#include <vector>

using namespace std;

struct NombreCurso {
  int anio;
  char division;
};

class Curso {
private:
  list<Usuario> m_integrantes;
  vector<string> m_materias;
  NombreCurso m_curso;

public:
  Curso(int t_anio, char t_division);
  Curso();

  NombreCurso getCurso();
  list<Usuario> getIntegrantes();
  vector<string> getMaterias();

  void addAlumno(Alumno t_alumno);
  void addDocente(Docente t_docente);
  void addMateria(string t_materia);
};

#endif
