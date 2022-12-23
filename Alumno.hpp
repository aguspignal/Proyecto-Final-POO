#ifndef ALUMNO_H
#define ALUMNO_H

#include "Usuario.hpp"
#include "MateriaYCurso.hpp"
#include <iostream>
#include <map>

using namespace std;

class Alumno : public Usuario {
private:
  map<string, float> m_historiaAcademica;
  NombreCurso m_curso;

public:
	Alumno(){};
  Alumno(string t_nombre, string t_apellido, string t_passowrd, string t_email, 
		string t_dni, int t_edad, int t_anio, char t_division);
  
  float getNota(string t_materia);
  void setNota(string t_materia, float t_nota);
  
  NombreCurso getCurso();
  void setCurso(NombreCurso t_curso);

//  float getPromedio();
  
  bool leerUsuario() override;
  Alumno getAlumnoByDNI(string dni);
  
  ~Alumno(){};
};

#endif
