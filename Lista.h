#pragma once
#include "nodoasig.h"
#include <iostream>
using namespace std;


class Lista
{
public:

	nodo* first, * last;
	Lista();
	~Lista();
	bool vacia();
	void iniciar();

	//getters

	nodo* getlast() { return last; };
	nodo* getfirst() { return first; };
	nodo* getproxcursor(nodo *p);
	nodo* getantcursor(nodo *p);

	//	void insert(nodo* nodop);
	
	void insert_first(nodo* nodop);
	void insert_last(nodo* nodop);
	virtual void insert(nodo* nodop, nodo* p);
    nodo* delet_first();
	nodo* delet_last();
	int total_elementos();
};

