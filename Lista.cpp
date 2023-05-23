#include "Lista.h"

using namespace std;


Lista::Lista() {
	first = nullptr;
	last = nullptr;
	
	
}

Lista::~Lista() {

}

void Lista::iniciar() {
	first = nullptr;
	last = nullptr;
}

bool Lista::vacia()
{
	return (first == nullptr);
}

void Lista::insert_first(nodo* nodop)
{
	if (vacia())
	{
		first = nodop;
		last = nodop;
	
	}
	else
	{
		nodop->next = first;
		first = nodop;
	
	}
	return;
}

void Lista::insert_last(nodo* nodop)
{
		
	if (vacia())
	{
		first = nodop;
		last = nodop;
	}
	else
	{
		last->next = nodop;
		last = nodop;
	}
	return;
}

void Lista::insert(nodo* nodop, nodo *p)
{
	
	nodo* q = nullptr;
	if (vacia())
	{
		first = nodop;
		last = nodop;

	}
	else
	{
		if (p == first) 
			insert_first(nodop);
		else
		{
			q = getantcursor(p);
			if (q == last) insert_last(nodop);
			else
			{
				q->next = nodop;
				nodop->next = p;
			}
		}	
	}
	
}

nodo* Lista::delet_first(){
	nodo* aux;


	if (vacia())
	{
		aux = nullptr;
	}
	else
	{
		aux = first;

		if (first == last) 
			iniciar();
		else
		{
			first = first->next;
		}
	}
	return aux;
}

nodo* Lista::delet_last(){
	nodo *ptemp, * aux;

	if (vacia()) aux = nullptr;

	else
	{
		aux = last;
		if (first == last) iniciar();
		else
		{
			ptemp = getantcursor(aux);
			if (ptemp!=nullptr)	
				ptemp->next = nullptr;
		    last = ptemp;
		}

	}
	return aux;
}

int Lista::total_elementos(){
nodo   * p = nullptr;

	int i=0;
	p = first;

	for (i = 0; p != NULL; i++)
	{
		p = p->next;

	}

	return i;
}

nodo* Lista::getproxcursor( nodo *p){
	if (p != nullptr) {
		return p->getnext();
	}
	else
		return nullptr;
};

nodo* Lista::getantcursor(nodo *q){ 
	
	if (vacia()) 
		return nullptr;
	else
	{
		if (q == first) 
			return nullptr;
		else
		{
			nodo* p = nullptr;
			p = first;
			while (p->next != q)
				p = p->next;
			return p;
		}
	}
};