#ifndef CURSO_H
#define CURSO_H

#include "Usuario.hpp"
#include <vector>
using namespace std;

class Curso {
  vector<Usuario> integrantes;
  vector<string> materias;
  int curso; // Tambien se podria guardar los dos en un unico string
  char division;

public:
  Curso(int anio, char division);
  Curso();

  string getCurso();
  vector<Usuario> getIntegrantes();
  vector<string> getMaterias();

  void addIntegrante(Usuario u);
  void addMateria(string m);
};

#endif
