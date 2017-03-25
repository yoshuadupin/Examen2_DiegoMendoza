#include "Paramecia.h"

Paramecia::Paramecia(string nombre ,string descripcion):FrutaDiablo(nombre){
	this->descripcion = descripcion;
}

Paramecia::~Paramecia(){

}

void Paramecia::escribir(ofstream& file){
	
	file<<"\nParamecia";
	file<<"\nNombre: ";
	file<<nombre;
	file<<"\nDescripcion: ";
	file<<descripcion;
	

}