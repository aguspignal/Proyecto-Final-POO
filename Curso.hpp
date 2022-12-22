#ifndef CURSO_H
#define CURSO_H

#include "Alumno.hpp"
#include "Docente.hpp"
#include <list>
#include <vector>
#include <fstream>

using namespace std;

class Curso {
private:
//	vector<Usuario*> m_integrantes;
  vector<Alumno*> m_alumnos;
  vector<Docente*> m_docentes;
  vector<string> m_materias;
  NombreCurso m_curso;

public:
  Curso(int t_anio, char t_division);
  Curso();

  NombreCurso getCurso();
  vector<string> getMaterias();

  /// Agregar y eliminar Materias
  void cargarMaterias(ifstream &archiMaterias);
  void addMateria(string t_materia);
  void deleteMateria(string t_materia);
    
  /// Cargar Alumnos, Docentes, Materias de los archivos
  void cargarCurso();
};

#endif
