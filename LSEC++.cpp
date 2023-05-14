// ListasSEAsignaturasC.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include"LSEAsignaturas.h"
#include <iostream>
#include"LSEAsignaturas.h"
using namespace std;

int main()
{
	LSEAsignaturas L;
	//int main(int argc, char* argv[])
	
	int cant;
	string cod, nombre, c;
	int opc;
	
	L.iniciar();
	
	do
	{
		
		system("cls");
		
		cout << "           LISTA DE ASIGNATURAS" << endl;
		cout << "      Seleccione la opcion a realizar\n\n";
		cout << "      1.- Insertar una asignatura\n";
		cout << "      2.- Eliminar una asignatura\n";
		cout << "      3.- Mostrar toda la lista de asignaturas\n";
		cout << "      4.- Insertar una asignatura  al final de la lista\n";
		cout << "      5.- Cantidad de Asignaturas en la lista\n";
		cout << "      6.- Total de horas de todas las Asignaturas en la lista\n";
		
		
		
		cout << "      7.- Salir";
		cout << "       \n\n\nOpcion(1-6): ";
		
		
		
		cin >> opc;
		
		switch (opc)
		{
		case 1:
			cod = "";
			nombre = "";
			cant = 0;
			cout << "Entre los Datos de la Asignatura:\n ";
			cout << "Codigo o siglas de la Asignatura: \n";
			cin >> cod;
			cout << "Nombre de la Asignatura: \n";
			cin >> nombre;
			cout << "Cantidad de Horas:\n ";
			cin >> cant;
			L.insertar_delante(cod, nombre, cant);
			break;
		case 2:
			cout << "codigo de la Asignatura a eliminar: \n";
			cin >> c;
			L.eliminar(c);
			break;
		case 3:
			L.mostrar();
			(void)getchar();
			(void)getchar();
			cout << "Oprima una tecla para salir";
			break;
		case 4:
			cod = "";
			nombre = "";
			cant = 0;
			cout << "Entre los Datos de la Asignatura:\n ";
			cout << "Codigo o siglas de la Asignatura: \n";
			cin >> cod;
			cout << "Nombre de la Asignatura: \n";
			cin >> nombre;
			cout << "Cantidad de Horas:\n ";
			cin >> cant;
			L.insertar_atras(cod, nombre, cant);
			break;
		case 5:
			int cc;
			cc=L.contar_total_elementos();
			cout << cc;
			(void)getchar();
			(void)getchar();
			break;
		case 6:
			int horas;
			horas = L.total_horas();
			cout << horas;
			(void)getchar();
			(void)getchar();
			break;
		case 7:
			exit(0);
			break;
			
		}
	} 	while ((opc != 7));
	
	
	
	return 0;
}





