#include "Piratas.h"

Piratas::Piratas(string raza, int edad, string nombre,FrutaDiablo* fruta, bool hakiObs , bool hakiArm ,bool hakiRey , string oceano,string tripulacion , string funcion):Seres( raza,  edad,  nombre, fruta,  hakiObs ,  hakiArm , hakiRey){
	this->oceano = oceano;
	this->tripulacion = tripulacion;
	this->funcion = funcion;
}
Piratas::~Piratas(){

}