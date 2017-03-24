
#include "Revolucionarios.h"

Revolucionarios::Revolucionarios(string raza, int edad, string nombre,FrutaDiablo* fruta, bool hakiObs , bool hakiArm ,bool hakiRey ,string fecha):Seres( raza,  edad,  nombre, fruta,  hakiObs ,  hakiArm , hakiRey){
	fechaIngreso = fecha;
}

Revolucionarios::~Revolucionarios(){
	
}

void Revolucionarios::escribir(){
	string path = nombre ;
	path.append(".log");
	ofstream file;
	const char* ruta = path.c_str();
	file.open(ruta);
	file<<"\n Revolucionarios ";
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
	file<<fechaIngreso;
	
	file.close();
	fruta->escribir(nombre);
}
