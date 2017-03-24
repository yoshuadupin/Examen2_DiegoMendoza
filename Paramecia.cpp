#include "Paramecia.h"

Paramecia::Paramecia(string nombre ,string descripcion):FrutaDiablo(nombre){
	this->descripcion = descripcion;
}

Paramecia::~Paramecia(){

}

void Paramecia::escribir(string nombre){
	string path = nombre;
	path.append(".log");
	ofstream file;
	const char* ruta = path.c_str();
	file.open(ruta);
	file<<"\nParamecia";
	file<<"\nNombre: ";
	file<<nombre;
	file<<"\nDescripcion: ";
	file<<descripcion;
	file.close();

}