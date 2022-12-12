#include "Curso.hpp"
#include <iostream>

Curso::Curso(int t_anio, char t_division) {
  m_curso.anio = t_anio;
  m_curso.division = t_division;

  archivo_materias = "materias"+to_string(t_anio)+".bin";
  
  ifstream archiMaterias(archivo_materias.c_str(),ios::binary|ios::in);
  if(archiMaterias.is_open()){ 
	string materia;
	char m[40];
	archiMaterias.read(reinterpret_cast<char*>(&m),sizeof(m));
	materia = m;
	m_materias.push_back(materia);
  }
  archiMaterias.close();
  
  archivo_integrantes = "integrantes"+to_string(t_anio)+".bin";
  
  ifstream archiIntegrantes(archivo_integrantes.c_str(),ios::binary|ios::in);
  if(archiIntegrantes.is_open()){
	char tipoUsuario[7];
	archiIntegrantes.read(reinterpret_cast<char*>(&tipoUsuario),sizeof(tipoUsuario));
	
	RegistroUsuario r;
	archiIntegrantes.read(reinterpret_cast<char*>(&r),sizeof(r));
	
	string s_tipoUsuario = tipoUsuario;
	if(s_tipoUsuario == "DOCENTE"){
		char materias[60];
		archiIntegrantes.read(reinterpret_cast<char*>(&materias),sizeof(materias))
			
		/**
		Las materias estan escritas como "Materia,Materia,...,Materia"
		Hay que separar cada Materia en un string distinto (nos ayudamos con las comas)
		y sumarlas al map de Docente con el NombreCurso que corresponda dependiendo del archivo.
		**/
		vector<string> v;
		NombreCurso c; c.anio = t_anio; c.division = t_division;
		Usuario *u = new Docente(r.m_nombre, r.m_password, r.m_email, r.m_dni, r.m_edad, c, v);
		
		m_integrantes.push_back(u);
		
	} else if (s_tipoUsuario == "ALUMNO"){
		NotaAlumno n;
		for(int i=0; i<m_materias.size(); i++){
			archiIntegrantes.read(reinterpret_cast<char*>(&n),sizeof(n));
		}
	} 
  }
}

// Constructor por defecto en primer anio
Curso::Curso() {
  m_curso.anio = 1;
  m_curso.division = 'A';
}

NombreCurso Curso::getCurso() { return m_curso; }

list<Usuario> Curso::getIntegrantes(){};

vector<string> Curso::getMaterias() { 
	return m_materias; 
}

void Curso::addAlumno(Alumno t_alumno) { m_integrantes.push_back(t_alumno); }

void Curso::addDocente(Docente t_docente) {
  m_integrantes.push_front(t_docente);
}

void Curso::addMateria(string t_materia) { m_materias.push_back(t_materia); }
