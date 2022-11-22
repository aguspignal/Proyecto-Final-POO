#include "Curso.hpp"
#include <iostream>

/// Establecer curso con un a�o y division;
Curso::Curso(int anio, char division) {
  this->curso = anio;
  this->division = division;
}

// Constructor por defecto en primer anio
Curso::Curso() {
  this->curso = 1;
  this->division = 'A';
}

/// Retornar a�o y division
string Curso::getCurso() {
  string str = (to_string(curso) + " " + division);
  return str;
}

/// A�adir nuevo ALumno/Docente/Preceptor al curso
void Curso::addIntegrante(Usuario u) { integrantes.push_back(u); }

/// Retornar vector con Alumnos, Docentes y Precetores
vector<Usuario> Curso::getIntegrantes() { return integrantes; }

/// A�adir materia al curso
void Curso::addMateria(string m) { materias.push_back(m); }

/// Retornar vector con Materias
vector<string> Curso::getMaterias() { return materias; }
