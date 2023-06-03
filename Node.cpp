#include "Node.h"


Node::Node(int val = 0)
{
	this->data = val;
	this->next = NULL;
	this->prev = NULL;
};

Node::~Node(){}

void Node::print()
{
	std::cout << this->data << ','<<' ';
}