#ifndef ALUMNO_H
#define ALUMNO_H

#include "Curso.hpp"
#include "Usuario.hpp"
#include <iostream>
#include <map>

using namespace std;

class Alumno : public Usuario {
private:
  map<string, float> m_historiaAcademica;
  int m_anio;
  char m_division;

public:
  Alumno(string t_nombre, string t_passowrd, string t_email, int t_dni,
         int t_edad, int t_anioIngreso, int t_anio, char t_division);

  void setNota(string t_materia, float t_nota);

  tuple<int, char> getCurso();
  float getNota(string t_materia);
  float getPromedio();
};

#endif
