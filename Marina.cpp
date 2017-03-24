#include "Marina.h"

Marina::Marina(string raza, int edad, string nombre,FrutaDiablo* fruta, bool hakiObs , bool hakiArm ,bool hakiRey , string fecha , string rango):Seres( raza,  edad,  nombre, fruta,  hakiObs ,  hakiArm , hakiRey){
	this->fecha  = fecha;
	this->rango  = rango;
}
Marina::~Marina(){

}	

void Marina::escribir(){
	string path = nombre ;
	path.append(".log");
	ofstream file;
	const char* ruta = path.c_str();
	file.open(ruta);
	file<<"\n Marina ";
	file<<"\nNombre: ";
	file<<nombre;
	file<<"\nRaza: ";
	file<<raza;
	file<<"\nEdad: ";
	file<<edad;
	file<<"\nHaki de Observacion: ";
	file<<hakiObs;
	file<<"\nHaki de Armadura:  ";
	file<<hakiArm;
	file<<"\nHaki del Rey: ";
	file<<hakiRey;
	file<<"\nFecha de ingreso: ";
	file<<fecha;
	file<<"\nRango: ";
	file<<rango;
	file.close();
	fruta->escribir(nombre);
}
