#pragma once

#include <iostream>

class Node
{
public:
	int data;
	int f;
	int c;
	Node* next;
	Node* prev;
	Node(int);
	~Node();
	void print();
};