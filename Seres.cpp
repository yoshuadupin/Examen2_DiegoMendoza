#include "Seres.h"
Seres::Seres(string raza, int edad, string nombre,FrutaDiablo* fruta, bool hakiObs , bool hakiArm ,bool hakiRey){
	this->raza = raza;
	this->edad = edad;
	this->nombre = nombre;
	this->fruta = fruta;
	this->hakiObs = hakiObs;
	this->hakiArm = hakiArm;
	this->hakiRey = hakiRey;
}


string Seres::getRaza(){
	return raza; 
}
int Seres::getEdad(){
	return edad; 
}
string Seres::getNombre(){
	return nombre;
}
FrutaDiablo* Seres::getFruta(){
	return fruta;
}
bool Seres::getHakiObs(){
	return hakiObs;
}
bool Seres::getHakiArm(){
	return hakiArm;
}
bool Seres::getHakiRey(){
	return hakiRey;
}

void Seres::setRaza(string raza){
	this->raza;
}
void Seres::setEdad(int edad){
	this->edad;
}
void Seres::setNombre(string nombre){
	this->nombre;
}
void Seres::setFruta(FrutaDiablo fruta){
	this->fruta;
}
void Seres::setHakiObs(bool hakiObs){
	this->hakiObs;
}
void Seres::setHakiArm(bool hakiArm){
	this->hakiArm;
}
void Seres::setHakiRey(bool hakiRey){
	this->hakiRey;
}