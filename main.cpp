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
FrutaDiablo* agregarFrutas();

int main(){
	int opcion;
	char decision;
	vector<Seres*> seres;
	vector<FrutaDiablo*> frutas;

/*	FrutaDiablo* probar = new Paramecia("Gumu gumi" , "NO hace nada");
	probar->escribir("adawLuffadads");
*/

	do{
		cout<<"Tama;o"<<endl;
		cout<<frutas.size()<<endl;
		cout<<"Agregar 2.frutas o 1.seres:"<<endl;
		cin>>opcion;
		if(opcion == 1){
			agregarSeres(seres , frutas);
		}else{
			frutas.push_back(agregarFrutas());
		}
		cout<<"Quirese seguir agregando:"<<endl;
		cin>>decision;
	}while(decision == 's');





	return 0;
}

void agregarSeres(vector<Seres*> seres , vector<FrutaDiablo*> frutas){
	int opcion;
	cout<<"Ingresara los atributos generales de tus Seres. Dios Pirata!!!:"<<endl;

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
	cin.ignore();
	getline(cin , nombre);

	cout<<"Ingrese el indice de la fruta:"<<endl;
	cout<<frutas.size();
	for (int i = 0; i < frutas.size(); ++i)
	{
		cout<<frutas[i]->getNombre()<<endl;
	}
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
		cin.ignore();
		getline(cin , tripulacion);

		cout<<"Ingrese la funcion:"<<endl;
		cin.ignore();
		getline(cin,funcion);

		seres.push_back(new Piratas(raza,  edad,  nombre, frutas[fruta],  hakiObs ,  hakiArm , hakiRey ,oceano , tripulacion , funcion));


	}else{
		string fechaIngreso;
		cout<<"Los revolucion es la unica forma de traer el cambio:"<<endl;

		cout<<"Ingrese la fecha en que ingreso a la revolucion:"<<endl;
		cin>>fechaIngreso;

		seres.push_back(new Revolucionarios(raza,  edad,  nombre, frutas[fruta],  hakiObs ,  hakiArm , hakiRey ,fechaIngreso));

	}

	seres[seres.size()-1]->escribir();

}

FrutaDiablo* agregarFrutas(){
	string nombre;
	int opcion;
	cout<<"Ingrese el nombre de la fruta del diablo:"<<endl;
	cin.ignore();
	getline(cin , nombre);

	cout<<"Que tipo de fruta es:"<<endl;
	cin>>opcion;

	if(opcion == 1){
		string descripcion;
		cout<<"Fruta Paramecia:"<<endl;
		cout<<"Que es lo que hace:"<<endl;
		cin.ignore();
		getline(cin , descripcion);

		return new Paramecia(nombre , descripcion);
	}else if(opcion == 2){
		cout<<"Fruta Zoan"<<endl;
		string tipo;
		string animal;
		cout<<"Que tipo es:1.normal, 2.prehistorica o 3.legendaria "<<endl;
		cin>>opcion;


		if(opcion == 1){
			tipo = "normal";
		}else if(opcion == 2){
			tipo = "prehistorica";
		}else {
			tipo = "legendaria";
		}

		cout<<"Que animal representa:"<<endl;
		cin>>animal;

		return new Zoan(nombre , tipo , animal);


	}else{
		string representa;
		cout<<"Fruta Logia"<<endl;
		cout<<"Que representa:"<<endl;
		cin>>representa;

		return new Logia(nombre , representa);
	}



}

