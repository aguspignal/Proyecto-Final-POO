#include "Alumno.hpp"
#include <iostream>

Alumno::Alumno(string t_nombre, string t_passowrd, string t_email, int t_dni,
               int t_edad, int t_anioIngreso, int t_anio, char t_division)
    : Usuario(t_nombre, t_passowrd, t_email, t_dni, t_edad, t_anioIngreso) {
  m_anio = t_anio;
  m_division = t_division;
};

void Alumno::setNota(string t_materia, float t_nota) {
  m_historiaAcademica[t_materia] = t_nota;
}

tuple<int, char> Alumno::getCurso() { return make_tuple(m_anio, m_division); }

float Alumno::getNota(string t_materia) {
  if ((m_historiaAcademica.find(t_materia)) != m_historiaAcademica.end())
    return m_historiaAcademica[t_materia];
  else
    return -1; // Ver si -1 es lo mas viable a retornar
}

float Alumno::getPromedio() {
  float sumaTotal = 0;
  int cantMaterias = 0;

  for (auto i = m_historiaAcademica.begin(); i != m_historiaAcademica.end();
       i++) {
    sumaTotal += i->second;
    cantMaterias++;
  }

  return sumaTotal / cantMaterias;
}
