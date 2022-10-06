#pragma once
#ifndef DNODE_H
#define DNODE_H
#include <iostream>
#include <string>

using namespace std;

class DNode {
private:
	string elem;
	DNode* prev;
	DNode* next;
	friend class DLinkedList;
};

#endif