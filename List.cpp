#include "List.h"

List::List()
{
	this->head = NULL;
	this->end = NULL;
	this->f = 0;
}

List::~List()
{
	std::cout << "Dest invok"<<std::endl;
	/*
	Node* p=this->head->next;
	while(head)
	{
		p = this->head->next;
		delete this->head;
		this->head=p;
	}
	*/
}

void List::insert(int d)
{
	//	Caso:	0 nodos
	if (!(this->head))
	{
		this->head = new Node(d);
		this->end = this->head;
	}

	//	Caso:	>=1 nodo
	else
	{
		Node* p = this->end;
		this->end->next=new Node(d);
		this->end = this->end->next;
		this->end->prev = p;
		p->next = this->end;
	}
}

void List::insert_new_head(int d)
{
	//	Caso:	0 nodos
	if (!(this->head))
	{
		this->head = new Node(d);
		this->end = this->head;
	}
	//	Caso:	>= 1 nodo
	else
	{
		Node* p = this->head;
		this->head->prev = new Node(d);
		this->head = this->head->prev;
		this->head->next = p;
		p->prev = this->head;
	}
}

void List::reverse_list()
{
	if(!this->head){}
	else if(this->head==this->end){}
	else
	{
		Node* p = this->end;
		this->end = this->head;
		this->head = p;
		p = this->head;	// nodo actual
		Node* p2 = p->prev;
		p->prev = p->next;
		p->next = p2;
		p2->next = p2->prev;
		p2->prev = p;
		p = p->next;
		p2 = p2->next;
		while (p2)
		{
			p2->next = p2->prev;
			p2->prev = p;
			p = p->next;
			p2 = p2->next;
		}
	}
}


void List::print()
{
	for (Node* p = head; p;p=p->next)
		p->print();
}

void List::print_reverse()
{
	for (Node* p = end; p; p = p->prev)
		p->print();
}