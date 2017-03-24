#include "Zoan.h"

Zoan::Zoan(string nombre, string tipo, string animal):FrutaDiablo(nombre){
	this->tipo = tipo;
	this->animal = animal;
}
Zoan::~Zoan(){

}

void Zoan::escribir(string nombre){
	string path = nombre;
	path.append(".log");
	ofstream file;
	const char* ruta = path.c_str();
	file.open(ruta);
	file<<"\nZoan";
	file<<"\nNombre: ";
	file<<nombre;
	file<<"\nTipo: ";
	file<<tipo;
	file<<"\nAnimal: ";
	file<<animal;
	file.close();
}