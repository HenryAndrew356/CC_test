#include "Node.h"


Node::Node(int f_=0, int c_ = 0, int val = 0)
{
	this->f = f_;
	this->c = c_;
	this->data = val;
	this->next = NULL;
	this->prev = NULL;
};

Node::~Node() {}

void Node::print()
{
	std::cout << '('<<f<<','<<c<<',' << this->data << ',' <<") ,";
}