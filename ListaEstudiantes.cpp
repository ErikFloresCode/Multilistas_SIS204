#include "ListaEstudiantes.h"

ListaEstudiantes::ListaEstudiantes() : Lista() {
}

ListaEstudiantes::~ListaEstudiantes() {
}

nodoestudiante* ListaEstudiantes::getproxcursor(nodoestudiante* p) {
	return p->getnext();
}

nodoestudiante* ListaEstudiantes::getantcursor(nodoestudiante* p) {
	return p->getformer();
}

void ListaEstudiantes::insert_first(nodoestudiante* nodop) {
	if (vacia())
	{
		first = nodop;
		last = nodop;

	}
	else
	{
		nodop->next = first;
		first->former = nodop;
		first = nodop;
	}
}

void ListaEstudiantes::insert_last(nodoestudiante* nodop){
	if (vacia())
	{
		first = nodop;
		last = nodop;
	}
	else
	{
		last->next = nodop;
		nodop->former = last;
		last = nodop;
	}
	return;
}

void ListaEstudiantes::insert(nodoestudiante* nodop, nodoestudiante* p) {
	nodoestudiante* q = nullptr;
	if (vacia()){
		first = nodop;
		last = nodop;
	}
	else{
		if (p == first) insert_first(nodop);
		else
		{
			q = getantcursor(p);
			if (q == last) insert_last(nodop);
			else
			{
				q->next = nodop;
				nodop->former = q;
				nodop->next = p;
				p->former = nodop;
			}
		}
	}
}

nodoestudiante* ListaEstudiantes::buscar_estudiante(string _id) {
	nodoestudiante* nodo = getfirst();
	for (int i = 0; nodo->getnext() != nullptr; i++) {
		if (_id == nodo->getid())
			return nodo;
		nodo = nodo->getnext();
	}
	return nullptr;
}

void ListaEstudiantes::delet(string _id) {
	nodoestudiante* n = nullptr,* anterior,* proximo;
	n = buscar_estudiante(_id);
	anterior = getantcursor(n);
	proximo = getproxcursor(n);
	anterior->next = proximo;
	proximo->former = anterior;
}

int ListaEstudiantes::mostrar_total_estudiantes() {
	nodoestudiante* n = first;
	int i;
	for (i = 0; n != NULL; i++) {
		n = n->getnext();
	}
	return i;
}