#pragma once
#include "nodo.h"
#include "nodoestudiante.h"

#include <iostream>
using namespace std;


class nodoasig :public nodo
{
public:
	string codigo, descripcion;
	int cantidad;
	nodoestudiante* nextest;
	//nodoestudiante* lastest;

	//constructores y destructor
	nodoasig();
	nodoasig(string _codigo, string _descripcion, int _cantidad);
	~nodoasig();

	//getters
	string getcodigo() { return codigo; }
	string getdescripcion() { return descripcion; }
	int getcantidad() { return cantidad; }
	nodoestudiante* getnextestudiante() { return nextest; };

	//setters
	void setcodigo(string _codigo) { codigo = _codigo; }
	void setdescripcion(string _descripcion) { descripcion = _descripcion; }
	void setcantidad(int _cantidad) { cantidad = _cantidad; }

	nodoasig* getnext() override;

};

