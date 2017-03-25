#include "Logia.h"

Logia::Logia(string nombre , string elemento):FrutaDiablo(nombre){
	this->elemento = elemento;
}
Logia::~Logia(){

}

void Logia::escribir(ofstream& file){
	
	file<<"\nLogia";
	file<<"\nNombre: ";
	file<<nombre;
	file<<"\nElemeto: ";
	file<<elemento;
	

}	