#include "Zoan.h"

Zoan::Zoan(string nombre, string tipo, string animal):FrutaDiablo(nombre){
	this->tipo = tipo;
	this->animal = animal;
}
Zoan::~Zoan(){

}

void Zoan::escribir(ofstream& file){
	
	file<<"\nZoan";
	file<<"\nNombre: ";
	file<<nombre;
	file<<"\nTipo: ";
	file<<tipo;
	file<<"\nAnimal: ";
	file<<animal;
	
}