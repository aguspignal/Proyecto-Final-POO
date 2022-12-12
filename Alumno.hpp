#ifndef ALUMNO_H
#define ALUMNO_H

#include "Curso.hpp"
#include "Usuario.hpp"
#include <iostream>
#include <map>

using namespace std;

struct NotaAlumno {
	string materia;
	float nota; 
};

class Alumno : public Usuario {
private:
  map<string, float> m_historiaAcademica;
  NombreCurso m_curso;

public:
  Alumno(string t_nombre, string t_passowrd, string t_email, int t_dni,
         int t_edad, int t_anio, char t_division);

  void setNota(string t_materia, float t_nota);
  void setCurso(NombreCurso t_curso);

  NombreCurso getCurso();
  float getNota(string t_materia);
  float getPromedio();
};

#endif
