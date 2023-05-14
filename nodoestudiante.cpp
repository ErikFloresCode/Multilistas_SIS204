#include "nodoestudiante.h"

nodoestudiante::nodoestudiante(){

}

nodoestudiante::nodoestudiante(string _id, string _nombre, string _apellido, int _edad, char _sexo){
	id = _id;
	nombre = _nombre;
	apellido = _apellido;
	edad = _edad;
	sexo = _sexo;
	next = nullptr;
	former = nullptr;
}

nodoestudiante::~nodoestudiante(){

}

nodoestudiante* nodoestudiante::getnext(){
	return (nodoestudiante*)nodo::getnext();
}