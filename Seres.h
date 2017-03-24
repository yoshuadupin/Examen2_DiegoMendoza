#pragma once
#include <string>
#include "FrutaDiablo.h"
#include <fstream>
#include <ostream>


using namespace std;

class Seres
{
protected:
	string raza;
	int edad;
	string nombre;
	FrutaDiablo* fruta;
	bool hakiObs;
	bool hakiArm;
	bool hakiRey;
public:
	Seres(string , int , string ,FrutaDiablo*, bool  , bool ,bool );
	~Seres();
	

	string getRaza();
	int getEdad();
	string getNombre();
	FrutaDiablo* getFruta();
	bool getHakiObs();
	bool getHakiArm();
	bool getHakiRey();

	void setRaza(string);
	void setEdad(int);
	void setNombre(string);
	void setFruta(FrutaDiablo);
	void setHakiObs(bool);
	void setHakiArm(bool);
	void setHakiRey(bool);

	virtual void escribir();
};