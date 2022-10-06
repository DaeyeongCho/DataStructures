#pragma once
#ifndef DLINKEDLIST_H
#define DLINKEDLIST_H
#include "DNode.h"
#include <iostream>
#include <string>

using namespace std;

class DLinkedList {
public:
	DLinkedList();
	~DLinkedList();
	bool empty() const;
	const string& front() const;
	const string& back() const;
	void addFront(const string& e);
	void addBack(const string& e);
	void removeFront();
	void removeBack();
	void prtAllList();
private:
	DNode* header;
	DNode* trailer;
protected:
	void add(DNode* v, const string& e);
	void remove(DNode* v);
};

#endif