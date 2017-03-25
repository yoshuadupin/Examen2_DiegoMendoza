#pragma once
#include "FrutaDiablo.h"


using namespace std;

class Zoan:public FrutaDiablo
{
private:
	string tipo;
	string animal; 
public:
	Zoan(string , string , string);
	~Zoan();
	
	void escribir(ofstream&);
};