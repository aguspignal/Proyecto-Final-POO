#include "Alumno.hpp"
#include <iostream>

Alumno::Alumno(string t_nombre, string t_passowrd, string t_email,
			   int t_dni, int t_edad, int t_anio, char t_division)
    : Usuario(t_nombre, t_passowrd, t_email, t_dni, t_edad){
	
	this->curso.anio = t_anio;
	this->curso.division = t_division;
};

/// Modificar nota 
void Alumno::setNota(string t_materia, float t_nota) {
  m_historiaAcademica[t_materia] = t_nota;
}

/// Retornar nota
float Alumno::getNota(string t_materia) {
  if ((m_historiaAcademica.find(t_materia)) != m_historiaAcademica.end())
    return m_historiaAcademica[t_materia];
  else
    return -1; // Ver si -1 es lo mas viable a retornar
}
