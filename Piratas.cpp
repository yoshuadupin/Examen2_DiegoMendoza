#include "Piratas.h"

Piratas::Piratas(string raza, int edad, string nombre,FrutaDiablo* fruta, bool hakiObs , bool hakiArm ,bool hakiRey , string oceano,string tripulacion , string funcion):Seres( raza,  edad,  nombre, fruta,  hakiObs ,  hakiArm , hakiRey){
	this->oceano = oceano;
	this->tripulacion = tripulacion;
	this->funcion = funcion;
}
Piratas::~Piratas(){

}

void Piratas::escribir(){
	string path = nombre ;
	path.append(".log");
	ofstream file;
	const char* ruta = path.c_str();
	file.open(ruta);
	file<<"\n Piratas ";
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
	file<<"\nOceano: ";
	file<<oceano;
	file<<"\ntripulacion: ";
	file<<tripulacion;
	file<<"\nFuncion: ";
	file<<funcion;
	fruta->escribir(file);
	file.close();
	
}
