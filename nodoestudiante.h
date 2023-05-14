#pragma once
#include "nodo.h"
#include <iostream>
using namespace std;
class nodoestudiante :public nodo
{
public:
	string id;
	string nombre;
	string apellido;
	char sexo;
	int edad;
	nodoestudiante* former;
	//constructores y destructor
	nodoestudiante();
	nodoestudiante(string _id, string _nombre, string _apellido, int _edad,char sexo);
	~nodoestudiante();
	//getters
	string getid() { return id; }
	string getnombre() { return nombre; }
	string getapellido() { return apellido; }
	int getedad() { return edad; }

	nodoestudiante* getnext() override;
	nodoestudiante* getformer() { return former; }
	//setters
	void setid(string _id) { id = _id; }
	void setnombre(string _nombre) { nombre = _nombre; }
	void setapellido(string _apellido) { apellido= _apellido; }
	void setedad(int _edad) { edad = _edad; }
	
};

