#ifndef ALUMNO_H
#define ALUMNO_H

#include "Curso.hpp"
#include "Usuario.hpp"
#include <iostream>
using namespace std;

class Alumno : public Usuario {
private:
  Curso m_curso;
  string m_nombre;
  string m_passowrd;
  string m_email;
  int m_dni;
  int m_edad;
  int m_anio;

public:
  Alumno(string t_nombre, string t_passowrd, string t_email, int t_dni,
         int t_edad, int t_anioIngreso, int t_anio, char t_division);
};

#endif