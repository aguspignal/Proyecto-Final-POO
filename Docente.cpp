#include "Docente.hpp"
#include "MateriaYCurso.hpp"
#include <iostream>

// Constructor por defecto
Docente::Docente(string t_nombre,string t_apellido, string t_passowrd, string t_email, int t_dni,
                 int t_edad)
    : Usuario(t_nombre, t_passowrd, t_email, t_dni, t_edad){};

vector<CursoMateria> Docente::getMateriasACargo(){
	return m_MateriasACargo;
}


bool Docente::leerUsuario(){
	ifstream archiDocentes("docentes.bin",ios::binary);
	
	char checkFinal[3];
	size_t pos = archiDocentes.tellg();
	archiDocentes.read(reinterpret_cast<char*>(&checkFinal),sizeof(checkFinal));
	string str = checkFinal;
	if(str == "FIN"){
		return false;
	} else {
		archiDocentes.seekg(pos);
		RegistroUsuario reg;
		archiDocentes.read(reinterpret_cast<char*>(&reg),sizeof(reg));
		setNombre(reg.nombre);
		setPassword(reg.password);
		setEmail(reg.email);
		setDNI(reg.dni);
		setEdad(reg.edad);
		
		archiDocentes.read(reinterpret_cast<char*>(&cant_materias),sizeof(cant_materias));
		
		for(int i=0;i<cant_materias;i++){
			CursoMateria curso_materia;
			archiDocentes.read(reinterpret_cast<char*>(&curso_materia),sizeof(curso_materia));
			m_MateriasACargo.push_back(curso_materia);
		}
		
		archiDocentes.close();
		return true;
	}
	
	archiDocentes.close();
	return false;
}

//void Docente::setMateriasACargo(NombreCurso t_curso, string t_materia) {
//  m_MateriasACargo[t_curso] = t_materia;
//}
//
//void Docente::removeMateriasACargo(map<NombreCurso, string> t_cursoMateria) {
//  auto it = t_cursoMateria.begin();
//  m_MateriasACargo.erase(it);
//}
