
#include "Revolucionarios.h"

Revolucionarios::Revolucionarios(string raza, int edad, string nombre,FrutaDiablo* fruta, bool hakiObs , bool hakiArm ,bool hakiRey ,string fecha):Seres( raza,  edad,  nombre, fruta,  hakiObs ,  hakiArm , hakiRey){
	fechaIngreso = fecha;
}

Revolucionarios::~Revolucionarios(){
	
}