#pragma once
#include "Seres.h"
#include <string>

using namespace std;

class Revolucionarios:public Seres
{
private:
	string fechaIngreso;	
public:
	Revolucionarios(string , int , string ,FrutaDiablo*, bool  , bool ,bool  , string);
	~Revolucionarios();

    void escribir();	
};