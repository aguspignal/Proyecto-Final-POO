#include "Alumno.hpp"
#include <iostream>

Alumno::Alumno(string t_nombre, string t_apellido, string t_passowrd, string t_email, int t_dni,
               int t_edad, int t_anio, char t_division)
    : Usuario(t_nombre, t_passowrd, t_email, t_dni, t_edad) {
  m_curso.anio = t_anio;
  m_curso.division = t_division;
};

/// Obtener nota dada una materia
float Alumno::getNota(string t_materia) {
	if ((m_historiaAcademica.find(t_materia)) != m_historiaAcademica.end())
		return m_historiaAcademica[t_materia];
	else
		return -1; // Ver si -1 es lo mas viable a retornar
}

/// Reemplazar nota
void Alumno::setNota(string t_materia, float t_nota) {
  m_historiaAcademica[t_materia] = t_nota;
}

/// Obtener curso
NombreCurso Alumno::getCurso() { return m_curso; }

/// Modificar curso
void Alumno::setCurso(NombreCurso t_curso) { m_curso = t_curso; }

/// Calcula promedio
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

/// Cargar Alumno desde binario
bool Alumno::leerUsuario(){
	ifstream archiAlumnos("alumnos.bin",ios::binary);
	
	char checkFinal[3];
	archiAlumnos.read(reinterpret_cast<char*>(&checkFinal),sizeof(checkFinal));
	string str = checkFinal;
	if(str == "FIN"){
		return false;
	} else {
		// Lee y asigna los datos principales
		RegistroUsuario reg;
		archiAlumnos.read(reinterpret_cast<char*>(&reg),sizeof(reg));
		setNombre(reg.nombre);
		setPassword(reg.password);
		setEmail(reg.email);
		setDNI(reg.dni);
		setEdad(reg.edad);
		
		// Captura la linea que contiene el curso
		char row[2];
		archiAlumnos.read(reinterpret_cast<char*>(&row),sizeof(row));
		NombreCurso curso;
		curso.anio = row[0];
		curso.division = row[1];
		setCurso(curso);
		
		// Calcula cantidad de materias a leer
		ifstream archiMaterias("materias"+std::to_string(curso.anio)+".bin",
							   ios::binary|ios::in|ios::ate);
		
		char m[30];
		int cant_materias = archiMaterias.tellg() / sizeof(m);
		archiMaterias.close();
		
		// Lee y asigna las notas
		for(int i=0; i<cant_materias; i++){
			NotaAlumno nota;
			archiAlumnos.read(reinterpret_cast<char*>(&nota),sizeof(nota));
			setNota(nota.materia, nota.nota);
		}
		
		archiAlumnos.close();
		return true;
	}
	
	// si paso algo raro y no entro al if()
	archiAlumnos.close();
	return false;
}

