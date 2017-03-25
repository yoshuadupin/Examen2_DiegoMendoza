#include "FrutaDiablo.h"

FrutaDiablo::FrutaDiablo(string nombre){
	this->nombre = nombre;
}



FrutaDiablo::~FrutaDiablo(){
	
}

string FrutaDiablo::getNombre(){
	return nombre;
}
void FrutaDiablo::escribir(ofstream& file){
	cout<<"Hola"<<endl;
}

