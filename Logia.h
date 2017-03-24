#pragma once
#include "FrutaDiablo.h"
#include <string>

class Logia:public FrutaDiablo
{
private:
	string elemento;	
public:
	Logia(string , string);
	~Logia();


	void escribir(string);	
};