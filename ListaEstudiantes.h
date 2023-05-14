#pragma once
#include <iostream>
#include "nodoestudiante.h"
using namespace std;

#include "Lista.h"


class ListaEstudiantes: public Lista
{
public:

	//punteros
	nodoestudiante* first, * last;

	//constructor
	ListaEstudiantes();
	~ListaEstudiantes();

	//getters
	nodoestudiante* getlast() { return (nodoestudiante*)getlast(); }
	nodoestudiante* getfirst() { return (nodoestudiante*)getfirst(); }
	nodoestudiante* getproxcursor(nodoestudiante* p);
	nodoestudiante* getantcursor(nodoestudiante* p);

	//funciones de la lista Estudiantes
	void insert_first(nodoestudiante* nodop);
	void insert_last(nodoestudiante* nodop);
	void insert(nodoestudiante* nodop, nodoestudiante* p);
	nodoestudiante* buscar_estudiante(string _id);
	void delet(string _id);
	int mostrar_total_estudiantes();
	int cantidad_M();
};

