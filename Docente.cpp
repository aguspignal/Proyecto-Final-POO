#include "Docente.hpp"
#include "MateriaYCurso.hpp"
#include <iostream>

// Constructor por defecto
Docente::Docente(string t_nombre,string t_apellido, string t_passowrd, string t_email, string t_dni,
                 int t_edad)
    : Usuario(t_nombre, t_passowrd, t_email, t_dni, t_edad){};

vector<CursoMateria> Docente::getMateriasACargo(){
	return m_MateriasACargo;
}


bool Docente::leerUsuario(){
	ifstream archiDocentes("docentes.bin",ios::binary|ios::in);
	
	RegistroUsuario reg;
	archiDocentes.read(reinterpret_cast<char*>(&reg),sizeof(reg));
	
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
		
		
	}
	
	archiDocentes.close();
	return true;
}

bool Docente::guardarUsuario(){
	
}


//void Docente::setMateriasACargo(NombreCurso t_curso, string t_materia) {
//  m_MateriasACargo[t_curso] = t_materia;
//}
//
//void Docente::removeMateriasACargo(map<NombreCurso, string> t_cursoMateria) {
//  auto it = t_cursoMateria.begin();
//  m_MateriasACargo.erase(it);
//}
