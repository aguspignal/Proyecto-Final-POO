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
  vector<Usuario*> m_integrantes;
  vector<string> m_materias;
  NombreCurso m_curso;
  string archivo_materias;
  string archivo_integrantes;

public:
  Curso(int t_anio, char t_division);
  Curso();

  NombreCurso getCurso();
  vector<string> getMaterias();

  /// Agregar y eliminar Usuarios del curso
  void cargarAlumnos();
  void addIntegrante(Usuario *u);
  void deleteIntegrante(Usuario *u);
  
  /// Agregar y eliminar Materias
  void cargarMaterias(ifstream &archiMaterias);
  void addMateria(string t_materia);
  void deleteMateria(string t_materia);
    
  /** 
  Este metodo se conectaria a materias.bin para actualizar m_materias, y a alumnos/docentes.bin
  para actualizar m_integrantes. m_curso ya lo declara el constructor
  **/
  void cargarCurso();
};

#endif
