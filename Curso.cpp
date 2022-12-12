#include "Curso.hpp"
#include <iostream>
#include <algorithm>

Curso::Curso(int t_anio, char t_division) {
  m_curso.anio = t_anio;
  m_curso.division = t_division;

  // Cargando las materias correspondientes del curso
  this->archivo_materias = "materias"+std::to_string(t_anio)+".bin";
  
  ifstream archiMaterias(archivo_materias,ios::binary|ios::in);
  if(archiMaterias.is_open()){ 
	string materia;
	char m[40];
	archiMaterias.read(reinterpret_cast<char*>(&m),sizeof(m));
	materia = m;
	m_materias.push_back(materia);
  }
  archiMaterias.close();
  
  // Cargando los integrantes(Alumnos y Docentes) del curso
  archivo_integrantes = "integrantes"+std::to_string(t_anio)+to_string(toupper(t_division))+".bin";
  
  ifstream archiIntegrantes(archivo_integrantes.c_str(),ios::binary|ios::in);
  if(archiIntegrantes.is_open()){
	char tipoUsuario[7];
	archiIntegrantes.read(reinterpret_cast<char*>(&tipoUsuario),sizeof(tipoUsuario));
	
	RegistroUsuario r;
	archiIntegrantes.read(reinterpret_cast<char*>(&r),sizeof(r));
	
	string str = r.m_nombre;
	string apellido = str.substr(0,str.find(",",0));
	string nombre = str.substr(str.find(",",0),str.length());
	
	string s_tipoUsuario = tipoUsuario;
	if(s_tipoUsuario == "DOCENTE"){
		char materias[60];
		archiIntegrantes.read(reinterpret_cast<char*>(&materias),sizeof(materias));
		
		// Suponiendo que un profe puede dar hasta un max de 3 materias...
		vector<string> v;
		string str = materias;
		auto pos = str.find(",",0);
		if(pos == string::npos){ // significa que hay una sola materia
			v.push_back(str);
		} else { // hay mas de una
			
			string m1 = str.substr(0,pos); // la primera hasta la ","
			
			if(str.find(",",pos+1) == string::npos){ // significa que hay 2 materias porque no encontro otra "," despues de la primera
				string m2 = str.substr(pos+1,str.length());
				v.push_back(m1);
				v.push_back(m2);
			} else { // encontro otra "," despues de la primera entonces hay 3 materias
				auto pos2 = str.find(",",pos+1);
				string m2 = str.substr(pos+1,pos2);
				string m3 = str.substr(pos2+1,str.length());
				v.push_back(m1);
				v.push_back(m2);
				v.push_back(m3);
			}
		}
		
		NombreCurso c; 
		c.anio = t_anio; 
		c.division = t_division;
		
		Usuario *u = new Docente
			(nombre, apellido, r.m_password, r.m_email, r.m_dni, r.m_edad, c, v);
		
		m_integrantes.push_back(*u);
		
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

//void Curso::addAlumno(Alumno t_alumno) { 
//	m_integrantes.push_back(t_alumno); 
//}
//
//void Curso::addDocente(Docente t_docente) {
//  m_integrantes.push_front(t_docente);
//}

void Curso::addIntegrante(Usuario u){
	m_integrantes.push_back(u);
}

void Curso::deleteIntegrante(Usuario u){
	auto it = find(m_integrantes.begin(),m_integrantes.end(),u);
	m_integrantes.erase(it);
}

void Curso::addMateria(string t_materia) { 
	m_materias.push_back(t_materia); 
}

void Curso::deleteMateria(string t_materia) { 
	auto it = find(m_materias.begin(),m_materias.end(),t_materia);
	m_materias.erase(it);
}
