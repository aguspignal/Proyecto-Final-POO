#include "Curso.h"
#include <iostream>

/// Establecer curso con un año y division;
Curso::Curso(int anio, char division){
	this->curso = anio;
	this->division = division;
}

/// Retornar año y division
string Curso::getCurso(){
	string str = (to_string(curso) + " " + division);
	return str;
}

/// Añadir nuevo ALumno/Docente/Preceptor al curso
void Curso::addIntegrante(Usuario u){
	integrantes.push_back(u);
}

/// Retornar vector con Alumnos, Docentes y Precetores 
vector<Usuario> Curso::getIntegrantes(){
	return integrantes;
}

/// Añadir materia al curso
void Curso::addMateria (string m){
	materias.push_back(m);
}

/// Retornar vector con Materias
vector<string> Curso::getMaterias(){
	return materias;
}
