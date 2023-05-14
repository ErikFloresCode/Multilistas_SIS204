#include "nodoasig.h"

nodoasig::nodoasig(): nodo(){
	codigo = "";
	descripcion="";
	cantidad=0;
	nextest = nullptr;
}

nodoasig::nodoasig(string _codigo, string _descripcion, int _cantidad) : nodo() {
	codigo = _codigo;
	descripcion = _descripcion;
	cantidad = _cantidad;
	nextest = nullptr;
}

nodoasig::~nodoasig() {
}

nodoasig* nodoasig::getnext(){
	return (nodoasig*)nodo::getnext();
}