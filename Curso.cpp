#include "Curso.hpp"
#include <iostream>

Curso::Curso(int t_anio, char t_division) {
  m_curso.anio = t_anio;
  m_curso.division = t_division;
}

// Constructor por defecto en primer anio
Curso::Curso() {
  m_curso.anio = 1;
  m_curso.division = 'A';
}

NombreCurso Curso::getCurso() { return m_curso; }

list<Usuario> Curso::getIntegrantes(){};

vector<string> Curso::getMaterias() { return m_materias; }

void Curso::addAlumno(Alumno t_alumno) { m_integrantes.push_back(t_alumno); }

void Curso::addDocente(Docente t_docente) {
  m_integrantes.push_front(t_docente);
}

void Curso::addMateria(string t_materia) { m_materias.push_back(t_materia); }