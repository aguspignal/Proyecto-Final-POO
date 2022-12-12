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
  vector<Usuario> m_integrantes;
  vector<string> m_materias;
  NombreCurso m_curso;
  string archivo_materias;
  string archivo_integrantes;

public:
  Curso(int t_anio, char t_division);
  Curso();

  NombreCurso getCurso();
  list<Usuario> getIntegrantes();
  vector<string> getMaterias();

  /// Agregar y eliminar Usuarios del curso
  void addIntegrante(Usuario u);
  void deleteIntegrante(Usuario u);
  
  /// Agregar y eliminar Materias
  void addMateria(string t_materia);
  void deleteMateria(string t_materia);
    
};


/// Sobrecarga operador==
bool operator==(Usuario u1, Usuario u2){
	u1.getDNI() == u2.getDNI() ? true : false;
}


#endif
