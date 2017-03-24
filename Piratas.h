#pragma once
#include "Seres.h"
#include <string>

using namespace std;

class Piratas:public Seres
{
private:
	string oceano;
	string tripulacion;
	string funcion;

public:
	Piratas( string , int , string ,FrutaDiablo*, bool  , bool ,bool ,string ,string , string );
	~Piratas();
	
};