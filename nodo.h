#pragma once
class nodo
{
public:
	nodo* next;
	//constructores
	nodo();
	~nodo();
	//getters
	virtual nodo* getnext() { return next; };
};