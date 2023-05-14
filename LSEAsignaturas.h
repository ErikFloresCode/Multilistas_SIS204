#pragma once
#include <iostream>
#include "nodoasig.h"
using namespace std;

#include "Lista.h"

class LSEAsignaturas:public Lista
{
public:

	//contructor
	LSEAsignaturas();
	~LSEAsignaturas();

	//funciones de la lista Asignatura
	void mostrar_f();
	void mostrar_w();
	nodoasig* buscar_asignatura(string valor);
	nodoasig* buscar_posicion(string valor);
	void delet(string valor);
	void insertar(nodoasig *nodop);
	void mostrar_estudiantes(nodoasig *nodop);
	void insertar_estudiantes_asignatura(nodoasig* nodop, nodoestudiante* nodoe);
	void mostrar_cant_M_F();
	int cantidad_M(nodoestudiante* n);
	int cantidad_F(nodoestudiante* n);
};

