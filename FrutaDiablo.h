#pragma once
#include <string>
#include <fstream>
#include <ostream>


using namespace std;

class FrutaDiablo
{
protected:
	string nombre;
public:

	FrutaDiablo(string);
	~FrutaDiablo();
	
	virtual void escribir(string);
};