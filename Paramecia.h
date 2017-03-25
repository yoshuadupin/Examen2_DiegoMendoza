#pragma once
#include "FrutaDiablo.h"

using namespace std;

class Paramecia:public FrutaDiablo
{
private:
	string descripcion;
public:
	Paramecia(string , string);
	~Paramecia();
	
	void escribir(ofstream&);

};