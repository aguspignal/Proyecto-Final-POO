#include "Curso.hpp"
#include <iostream>
#include <algorithm>
#include <fstream>
using namespace std;

Curso::Curso(int t_anio, char t_division) {
  m_curso.anio = t_anio;
  m_curso.division = t_division;
  
  cargarCurso();
}

// Constructor por defecto en primer anio
Curso::Curso() {
  m_curso.anio = 1;
  m_curso.division = 'A';
}

NombreCurso Curso::getCurso() { return m_curso; }

vector<string> Curso::getMaterias() { 
	return m_materias; 
}

void Curso::cargarMaterias(ifstream &archiMaterias){
	// se aceptan correcciones, tengo dudas
	char materia[50];
	int cant_materias = archiMaterias.tellg() / sizeof(materia);
	archiMaterias.seekg(0);
	
	for(int i=0; i<cant_materias; i++){
		archiMaterias.read(reinterpret_cast<char*>(&materia),sizeof(materia));
		string m = materia;
		addMateria(m);
	}
}

void Curso::addMateria(string t_materia) { 
	m_materias.push_back(t_materia); 
}

void Curso::deleteMateria(string t_materia) { 
	auto it = find(m_materias.begin(),m_materias.end(),t_materia);
	m_materias.erase(it);
}

void Curso::cargarCurso(){
	ifstream archiMaterias("materias"+to_string(m_curso.anio)+".bin",ios::binary|ios::in);
	cargarMaterias(archiMaterias);
	archiMaterias.close();
	
	bool result;
	
	ifstream archiAlumnos("alumnos.bin",ios::binary|ios::in);
	Alumno *alumno;
	do{
		result = alumno->leerUsuario();
		if(result){
			if(alumno->getCurso() == m_curso){
				m_alumnos.push_back(alumno);
			}
		}
	}while(result == true);
	archiAlumnos.close();
	
	ifstream archiDocentes("docentes.bin",ios::binary|ios::in);
	Docente *docente;
	do{
		result = docente->leerUsuario();
		if(result){
			for(CursoMateria curso_materia : docente->getMateriasACargo()){
				if(curso_materia.anio == m_curso.anio){
					m_docentes.push_back(docente);
				}
			}
		}
	}while(result == true );
	archiDocentes.close();
}


