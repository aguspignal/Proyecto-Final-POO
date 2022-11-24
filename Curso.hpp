#ifndef CURSO_H
#define CURSO_H

#include "Usuario.hpp"
#include <vector>
using namespace std;

struct NombreCurso {
	int anio;
	char division;
};

class Curso {
private:
  vector<Usuario> integrantes;
  vector<string> materias;
  NombreCurso curso;

public:
  Curso(int anio, char division);
  Curso();

  NombreCurso getCurso();
  vector<Usuario> getIntegrantes();
  vector<string> getMaterias();

  void addIntegrante(Usuario u);
  void addMateria(string m);
};

#endif
