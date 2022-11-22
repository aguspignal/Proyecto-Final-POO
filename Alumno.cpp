#include "Alumno.hpp"
#include <iostream>

Alumno::Alumno(string t_nombre, string t_passowrd, string t_email, int t_dni,
               int t_edad, int t_anioIngreso, int t_anio, char t_division)
    : Usuario(t_nombre, t_passowrd, t_email, t_dni, t_edad, t_anioIngreso){};
