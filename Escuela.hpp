#ifndef ESCUELA_H
#define ESCUELA_H

#include "Curso.hpp"

#include <string>
#include <vector>
using namespace std;

/** 
 Clase que va a tener una instancia viva mientras el programa este abierto
 La idea es que maneje todo el flujo de datos( Cargar el/los cursos, escuchar los eventos, etc)
 Sino tendriamos que dejarle todo a la clase Curso, inviable
**/
class Escuela {
private:
	vector<Curso>m_cursos; // en duda aun
	Usuario *user; // ¿? representando al user activo, capaz puede ser de utilidad
	
public:
	Escuela(){};
	
	/** 
	Todavia no esta implementado, la idea es que verifique si el DNI y Psw ingresados
	EXISTEN en el archivo alumnos.bin o docentes.bin (aca esta mi actual problema)
	segun lo que se indico en la ventana anterior
	
	En caso de existir se me ocurren dos caminos:
	- Si Alumno: El programa deberia cargar SOLO el curso de ESE alumno. m_cursos puede tener
	un solo elemento y chau (?
	- Si Docente: Los cursos en los que tiene materias a cargo
	**/
	bool AutenticarDatosLogin(int choice, long log_dni, string log_password);
};

#endif
