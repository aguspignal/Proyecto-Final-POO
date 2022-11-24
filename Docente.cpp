#include "Docente.hpp"
#include <iostream>
Docente::Docente(string nombre, string apellido, string email, 
				 int dni, int edad)
		: Usuario(nombre, apellido, email, dni, edad) {}
