#include "Escuela.hpp"
#include <fstream>
#include <string>
using namespace std;

// no se me ocurrio una forma de simplificar mas este codigo
bool Escuela::AutenticarDatosLogin(int choice, string log_dni, string log_password){
	bool result;
	
	if(choice == 1){
		Usuario *alumno = new Alumno;
		do{
			result = alumno->leerUsuario();
			
			if(!result){
				delete alumno;
				return false;
			} else {
				if(alumno->getDNI() == log_dni && alumno->getPassword() == log_password){
					delete alumno;
					return true;
				}
			}
		}while(result == true);
		
	} else if(choice == 2){
		Usuario *docente = new Docente;
		do{
			result = docente->leerUsuario();
			
			if(!result){
				delete docente;
				return false;
			} else {
				if(docente->getDNI() == log_dni && docente->getPassword() == log_password){
					delete docente;
					return true;
				}
			}
		}while(result == true);
		
	} else {
		return false;
	}
}
