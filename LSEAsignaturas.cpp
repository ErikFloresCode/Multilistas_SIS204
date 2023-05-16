#include "LSEAsignaturas.h"

LSEAsignaturas::LSEAsignaturas() : Lista(){
}

LSEAsignaturas::~LSEAsignaturas() {
}

nodo* LSEAsignaturas::getantcursor(nodo* q) {
	nodo* aux = Lista::getantcursor(q);
	if (!vacia() && q == first)
		aux = last;
	return aux;
}

void LSEAsignaturas::mostrar_f(){
	
	nodoasig* p = nullptr;
	if (vacia())
		cout << "Lista vacia";
	else
	{
		//p no esta inicializando correctamente
		int i;
		p = (nodoasig*)first;
		
		for (i = 1; p != NULL; i++){
			cout << "mostrar i" << i << endl;
			cout << p->codigo << endl;
			cout << p->descripcion << endl;
			cout << p->cantidad << endl;
			p = p->getnext();

		}
	}
}

void LSEAsignaturas::mostrar_w()
{

	nodoasig* p;

	if (vacia())
		cout << "Lista vacia";
	else

	{
		p = (nodoasig*)first;
		while (p != NULL) {
			cout << p->codigo << endl;
			cout << p->descripcion << endl;
			cout << p->cantidad << endl;
			p = p->getnext();
			
		}
	}

	return;

}

nodoasig *LSEAsignaturas::buscar_asignatura(string valor) {

	nodoasig* p, *q;
	bool enc = false;

	p = (nodoasig*)first;
	while ((p != nullptr) && (p->codigo != valor)) {

		q = p;
		p = p->getnext();
	}

	return p;

}

nodoasig* LSEAsignaturas::buscar_posicion(string valor) {

	nodoasig* p, * q;
	bool enc = false;

	p = (nodoasig*)first;
	while ((p != nullptr) && (p->codigo < valor)) {

		q = p;
		p = p->getnext();
	}

	return p;

}

void LSEAsignaturas::delet(string valor)
{
	nodoasig* p, * q;

	if (vacia())
		cout << "No hay elementos en la lista";
	else
	{
		p = buscar_asignatura(valor);

		if (p == nullptr)
			cout << "No existe ese elemento en la lista";
		else
		{
			if ((p == first) && (p == last))
				iniciar();
			else
			{
				q = (nodoasig*)getantcursor(p);
				if (q != nullptr) {
					q->next = p->getnext();

					if (p == first)
						first = p->getnext();
					else
						if (p == last)
							last = q;

				}
			}
		}
	}
}

void LSEAsignaturas::insertar(nodoasig *nodop){
nodoasig* p;

p = buscar_posicion(nodop->codigo);
insert(nodop, p);
return;
}

void LSEAsignaturas::mostrar_estudiantes(nodoasig* nodop) {
	nodoestudiante* p = nullptr;

	if (nodop!=nullptr)
	{
		int i;
		p = nodop->getnextestudiante();

		for (i = 1; p != NULL; i++)
		{
			cout << p->id << endl;
			cout << p->nombre << endl;
			cout << p->apellido << endl;
			cout << p->edad << endl;
			cout << p->sexo << endl;
			p = p->getnext();

		}

		return;
	}
}
		
void LSEAsignaturas::insertar_estudiantes_asignatura(nodoasig* nodop, nodoestudiante* nodoe) {

	if ((nodop != nullptr) && (nodoe!=nullptr))
	{
		nodoe->next = nodop->getnextestudiante();
		nodop->nextest = nodoe;
	}
	return;
}

int LSEAsignaturas::cantidad_M(nodoestudiante* n) {
	int i, cant = 0;
	for (i = 0; n != NULL; i++) {
		if (n->sexo == 'M' || n->sexo == 'm')
			cant++;
		n = n->getnext();
	}
	return cant;
}

int LSEAsignaturas::cantidad_F(nodoestudiante* n) {
	int i, cant = 0;
	for (i = 0; n != NULL; i++) {
		if (n->sexo == 'F' || n->sexo == 'f')
			cant++;
		n = n->getnext();
	}
	return cant;
}

void LSEAsignaturas::mostrar_cant_M_F() {
	nodoasig* n = (nodoasig*)first;
	int cant_M = 0, cant_F = 0;
	for (int i = 0; n != NULL; i++) {
		cant_M += cantidad_M(n->nextest); 
		cant_F += cantidad_F(n->nextest);
		n = n->getnext();
	}
	cout << "Cantidad de Varones: " << cant_M << endl;
	cout << "Cantidad de Mujeres: " << cant_F << endl;
}

void LSEAsignaturas::insert_first(nodo* nodop) {
	Lista::insert_first(nodop);
	if (!vacia())
		last->next = first;
}
void LSEAsignaturas::insert_last(nodo* nodop) {
	Lista::insert_last(nodop);
	if (!vacia())
		last->next = first;
}
nodo* LSEAsignaturas::delet_first() {
	nodo* aux = Lista::delet_first();
	if (!vacia() && first != last)
		last->next = first;
	return aux;
}
nodo* LSEAsignaturas::delet_last() {
	nodo* aux = Lista::delet_last();
	if (!vacia() && first != last)
		last->next = first;
	return aux;
}