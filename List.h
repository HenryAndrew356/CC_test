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
	List();
	~List();


	//	Manejo da datos
	void insert(int);				//	listo
	void insert_new_head(int);		//	listo
	void insert_pos(int, int);
	void modify(int, int);
	void delete_data();
	void delete_pos(int);

	//
	void reverse_list();			//	listo

	//	Ordenamieno de datos
	void selection_sort();
	void bubble_sort();
	void insertion_sort();
	void merge_sort();
	void quick_sort();
	void heap_sort();
	void coutning_sort();
	void radiz_sort();
	void bucket_sort();

	//
	void print();					//	listo
	void print_reverse();			//	listo
};

