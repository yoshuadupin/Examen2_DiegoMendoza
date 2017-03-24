#include "Logia.h"

Logia::Logia(string nombre , string elemento):FrutaDiablo(nombre){
	this->elemento = elemento;
}
Logia::~Logia(){

}

void Logia::escribir(string nombre){
	string path = nombre;
	path.append(".log");
	ofstream file;
	const char* ruta = path.c_str();
	file.open(ruta);
	file<<"\nLogia";
	file<<"\nNombre: ";
	file<<nombre;
	file<<"\nElemeto: ";
	file<<elemento;
	file.close();

}	