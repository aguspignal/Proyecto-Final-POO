#ifndef ALUMNO_H
#define ALUMNO_H

#include "Curso.hpp"
#include "Usuario.hpp"
#include <iostream>
using namespace std;

class Alumno : public Usuario {
public:
  Alumno(string t_nombre, string t_passowrd, string t_email, int t_dni,
         int t_edad, int t_anioIngreso, int t_anio, char t_division);
};

#endif