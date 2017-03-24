#include "Marina.h"

Marina::Marina(string raza, int edad, string nombre,FrutaDiablo* fruta, bool hakiObs , bool hakiArm ,bool hakiRey , string fecha , string rango):Seres( raza,  edad,  nombre, fruta,  hakiObs ,  hakiArm , hakiRey){
	this->fecha  = fecha;
	this->rango  = rango;
}
Marina::~Marina(){

}	

void Marina::escribir(string nombre){
	
}
