#pragma once
#include <string>
#include <fstream>
#include <ostream>
#include <iostream>



using namespace std;

class FrutaDiablo
{
protected:
	string nombre;
public:

	FrutaDiablo(string);
	~FrutaDiablo();

	string getNombre();	
	virtual void escribir(ofstream&);
};