#include "Curso.hpp"
#include <iostream>

/// Establecer curso con un a�o y division;
Curso::Curso(int anio, char division) {
  this->curso.anio = anio;
  this->curso.division = division;
}

// Constructor por defecto en primer anio
Curso::Curso() {
  this->curso.anio = 1;
  this->curso.division = 'A';
}

/// Retornar anio y division
NombreCurso Curso::getCurso() {
  return curso;
}

/// Agregar nuevo ALumno/Docente/Preceptor al curso
void Curso::addIntegrante(Usuario u) { integrantes.push_back(u); }

/// Retornar vector con Alumnos, Docentes y Precetores
vector<Usuario> Curso::getIntegrantes() { return integrantes; }

/// Agregar materia al curso
void Curso::addMateria(string m) { materias.push_back(m); }

/// Retornar vector con Materias
vector<string> Curso::getMaterias() { return materias; }
