#include "Escuela.hpp"
#include <fstream>
#include <string>
using namespace std;

// no se me ocurrio una forma de simplificar mas este codigo
tuple<Usuario*,bool> Escuela::AutenticarDatosLogin(int choice, string log_dni, string log_password){
	bool result;
	
	if(choice == 1){
		Usuario *alumno = new Alumno;
		ifstream archiAlumnos("alumnos.bin",ios::binary|ios::in);
		
		do{
			RegistroUsuario reg;
			archiAlumnos.read(reinterpret_cast<char*>(&reg),sizeof(reg));
			
			string str = reg.nombre;
			if(str == "fin"){
				result = false;
				return make_tuple (alumno,result);
			} else {
				alumno->setNombre(str);
				
				str = reg.password;
				alumno->setPassword(str);
				
				str = reg.email;
				alumno->setEmail(str);
				
				str = reg.dni;
				alumno->setDNI(str);
				
				alumno->setEdad(reg.edad);
				
				if(alumno->getDNI() == log_dni && alumno->getPassword() == log_password){
					result = true;
					return make_tuple (alumno,result);
				}
			}
			
			archiAlumnos.close();
			result = false;
			return make_tuple (alumno,result);
			
		}while(result);
		
	} else if(choice == 2){
		Usuario *docente = new Docente;
		ifstream archiDocentes("docentes.bin",ios::binary|ios::in);
		
		do{
			RegistroUsuario reg;
			archiDocentes.read(reinterpret_cast<char*>(&reg),sizeof(reg));
			
			string str = reg.nombre;
			if(str == "fin"){
				make_tuple (docente,false);
			} else {
				docente->setNombre(str);
				
				str = reg.password;
				docente->setPassword(str);
				
				str = reg.dni;
				docente->setDNI(str);
				
				if(docente->getDNI() == log_dni && docente->getPassword() == log_password){
					make_tuple (docente,true);
				}
			}
			
			archiDocentes.close();
			make_tuple (docente,false);
			
		}while(result);
		
	}
}
