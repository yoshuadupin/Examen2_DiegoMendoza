#include "FrutaDiablo.h"
#include "Paramecia.h"
#include "Zoan.h"
#include "Logia.h"

#include "Seres.h"
#include "Marina.h"
#include "Revolucionarios.h"
#include "Piratas.h"

#include <string>
#include <vector>
#include <iostream>


using namespace std;

void agregarSeres(vector<Seres*> , vector<FrutaDiablo*>);
void agregarFrutas(vector<FrutaDiablo*>);

int main(){
	vector<Seres*> seres;
	vector<FrutaDiablo*> frutas;


	return 0;
}

void agregarSeres(vector<Seres*> seres , vector<FrutaDiablo*> frutas){
	int opcion;
	cout<<"Ingresara los atributos generales de tus Seres. Dios Pirata!!!:"<<endl;

	cout<<"Que desea agregar un Marino , Pirata o un Revolucionario:"<<endl;
	cin>>opcion;
	string raza;
	int edad;
	string nombre;
	int fruta;
	bool hakiObs;
	bool hakiArm;
	bool hakiRey;
	char decision;
	cout<<"Que raza es tu ser:1.gyojin, 2.kyojin, 3.ningyo, 4.humano, 5.mink o 6.skypieans"<<endl;
	cin>>opcion;

	if(opcion == 1){
		raza = "gyokin";
	}else if(opcion == 2){
		raza = "kyojin";
	}else if(opcion == 3){
		raza = "ningyo";
	}else if(opcion == 4){
		raza = "humano";
	}else if(opcion == 5){
		raza = "mink";
	}else if(opcion == 6){
		raza = "skypieans";
	}else {
		raza = "humano";
	}

	cout<<"Ingrese la antiguedad del ser:"<<endl;
	cin>>edad;

	cout<<"Ingrese el nombre"<<endl;
	//cin.ignore();
	getline(cin , nombre);

	cout<<"Ingrese el indice de la fruta:"<<endl;
	cin>> fruta;

	cout<<"Tiene Haki de observacion:"<<endl;
	cin>>decision;
	if(decision == 's'){
		hakiObs = true;
	}else{
		hakiObs = false;
	}

	cout<<"Tiene Haki de Armadura:"<<endl;
	cin>>decision;
	if(decision == 's'){
		hakiArm = true;
	}else{
		hakiArm = false;
	}

	cout<<"Tiene Haki del Rey"<<endl;
	cin>>decision;
	if(decision == 's'){
		hakiRey = true;
	}else{
		hakiRey = false;
	}

	cout<<"Que desea agregar un Marino , Pirata o un Revolucionario:"<<endl;
	cin>>opcion;
	if(opcion == 1){
		string fecha;
		string rango;
		
		cout<<"Bienvenido a la Marina , Las Aguas de Inglaterra son primero:"<<endl;
		cout<<"En que fecha se unio a la marina:"<<endl;
		cin>>fecha;

		cout<<"Rango del Pirata:[que   puede   ser cadete, teniente, vice-almirante, almirante y almirante de flota]"<<endl;
		cin>>opcion;

		if(opcion == 1){
			rango = "cadete";
		}else if(opcion == 2){
			rango = "teniente";
		}else if(opcion == 3){
			rango = "vice-almirante";
		}else if(opcion == 4){
			rango = "almirante";
		}else if(opcion == 5){
			rango = "almirante de flota";
		}else{
			rango = "cadete";
		}

		seres.push_back(new Marina(raza,  edad,  nombre, frutas[fruta],  hakiObs ,  hakiArm , hakiRey, fecha , rango));


	}else if(opcion == 2){
		string oceano;
		string tripulacion;
		string funcion;
		cout<<"Vamos mar adentro Senoritas:"<<endl;

		cout<<"De que parte del oceano proviena:[ east,   west,   south,   north ,blue, grand line y new world]:"<<endl;
		cin>>opcion;
		if(opcion == 1){
			oceano = "east";
		}else if(opcion == 2){
			oceano = "west";
		}else if(opcion == 3){
			oceano = "south";
		}else if(opcion == 4){
			oceano = "north";
		}else if(opcion == 5){
			oceano = "blue";
		}else if(opcion == 6){
			oceano = "grand line";
		}else if(opcion == 7){
			oceano = "new world";
		}else{
			oceano = "east";
		}

		cout<<"Ingrese la tripulacion:"<<endl;
		cin>>tripulacion;

		cout<<"Ingrese la funcion:"<<endl;
		cin>>funcion;

		seres.push_back(new Piratas(raza,  edad,  nombre, frutas[fruta],  hakiObs ,  hakiArm , hakiRey ,oceano , tripulacion , funcion));


	}else{

	}
}

