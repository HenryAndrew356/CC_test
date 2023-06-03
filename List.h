#pragma once
#include "Node.h"
#include <iomanip>

class List
{
public:

	//	Datos miembro
	int f;
	Node* head;
	Node* end;

	//	Constructor y destructor
	List(int);
	~List();


	//	Manejo da datos

	//	Insert al final
	void insert(int);					//	Listo

	//	Insertar al inicio con columna igual a 0
	void insert_new_head(int);			//	


	//	rechazar si ya se encuentra nodo ocupadao
	void insert_pos(int, int);			//

	//	insertar en la posicion con el valor aun asui este ocupado
	void insert_pos_hard(int, int);


	//	Modificar el valor en determinada columna, si no existe, crearla
	void modify(int, int);				//

	//	Modifica si encuentra el valor
	void modify(int);					//


	//	rechazar si no existe el valor
	void delete_data(int);				//


	//	eliminar determinado nodo columna
	void delete_pos(int);				//


	//	Invertir la lista
	void reverse_list();				//

	//	Ordenamieno de datos
	void selection_sort();				//	
	void bubble_sort();					//	
	void insertion_sort();				//	
	void merge_sort();					//
	void quick_sort();					//
	void heap_sort();					//
	void coutning_sort();				//
	void radiz_sort();					//
	void bucket_sort();					//

	//	verificacion de datos
	void print();						//	listo
	//		en inverso
	void print_reverse();				//	listo


	//	Poder asignar una lista a otra con sobercarga de operadores
	List* duplicate();					//
};

