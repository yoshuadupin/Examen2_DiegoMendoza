#pragma once
#include "Seres.h"
#include <string>
#include <fstream>
#include <ostream>


using namespace std;

class Marina:public Seres
{
private:
	string fecha;
	string rango;

public:
	Marina(string , int , string ,FrutaDiablo*, bool  , bool ,bool ,string , string);
	~Marina();

	void escribir();

	
};
