#ifndef ALUMNO_H
#define ALUMNO_H

#include "Usuario.hpp"
#include "Curso.hpp"
#include <iostream>
#include <map>
using namespace std;

class Alumno : public Usuario {
private:
  map<string, float> m_historiaAcademica;
  NombreCurso curso;

public:
  Alumno(string t_nombre, string t_passowrd, string t_email, int t_dni,
         int t_edad, int t_anioIngreso, int t_anio, char t_division);
  
  void setNota(string t_materia, float t_nota);
  float getNota(string t_materia);
};

#endif
