#include "Escuela.hpp"
#include <fstream>
#include <string>
using namespace std;

bool Escuela::AutenticarDatosLogin(int choice, long log_dni, string log_password){
	bool result;
	
	if(choice == 1){
		do{
			Alumno alumno;
			result = alumno.leerUsuario();
			
			
			if(!result){
				return false;
			} else {
				if(alumno.getDNI() == log_dni && alumno.getPassword() == log_password){
					return true;
				}
			}
		}while(result == true);
		
	} else if(choice == 2){
		do{
			Docente docente;
			result = docente.leerUsuario();
			
			if(!result){
				return false;
			} else {
				if(docente.getDNI() == log_dni && docente.getPassword() == log_password){
					return true;
				}
			}
		}while(result == true);
		
	} else {
		return false;
	}
	
	return false;
}
