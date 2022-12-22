#include "Alumno.hpp"
#include <iostream>

Alumno::Alumno(string t_nombre, string t_apellido, string t_passowrd, string t_email,
			   string t_dni, int t_edad, int t_anio, char t_division)
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

///// Calcula promedio
//float Alumno::getPromedio() {
//  float sumaTotal = 0;
//  int cantMaterias = 0;
//
//  for (auto i = m_historiaAcademica.begin(); i != m_historiaAcademica.end();
//       i++) {
//    sumaTotal += i->second;
//    cantMaterias++;
//  }
//
//  return sumaTotal / cantMaterias;
//}

/// Leer Alumno desde binario
bool Alumno::leerUsuario(){
	ifstream archiAlumnos("alumnos.bin",ios::binary|ios::in);
	
	RegistroUsuario reg;
	archiAlumnos.read(reinterpret_cast<char*>(&reg),sizeof(reg));
	
	string str = reg.nombre;
	string aux = str.substr(0,3);
	if(aux == "FIN"){
		return false;
	} else {
		setNombre(reg.nombre);
		setPassword(reg.password);
		setEmail(reg.email);
		setDNI(reg.dni);
		setEdad(reg.edad);
		
		NombreCurso c;
		archiAlumnos.read(reinterpret_cast<char*>(&c),sizeof(c));
		setCurso(c);
		
		ifstream archiMaterias("materias"+std::to_string(c.anio)+".bin",ios::binary|ios::ate);
		char materia[50];
		int cant_materias = archiMaterias.tellg() / sizeof(materia);
		archiMaterias.close();
		
		for(int i=0;i<cant_materias;i++){
			float nota;
			archiAlumnos.read(reinterpret_cast<char*>(&materia),sizeof(materia));
			archiAlumnos.read(reinterpret_cast<char*>(&nota),sizeof(nota));
			
			setNota(materia,nota);
		}
	}
	
	archiAlumnos.close();
	return true;
}

/// Guarda Alumno al binario
bool Alumno::guardarUsuario(){
	
}


