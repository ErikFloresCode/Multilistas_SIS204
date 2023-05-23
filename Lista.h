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
	virtual nodo* getantcursor(nodo *p);

	//	void insert(nodo* nodop);
	
	virtual void insert_first(nodo* nodop);
	virtual void insert_last(nodo* nodop);
	virtual void insert(nodo* nodop, nodo* p);
    virtual nodo* delet_first();
	virtual nodo* delet_last();
	int total_elementos();
};

