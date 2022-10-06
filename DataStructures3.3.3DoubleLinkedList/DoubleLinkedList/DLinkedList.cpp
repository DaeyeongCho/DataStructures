#include <iostream>
#include <string>
#include "DNode.h"
#include "DLinkedList.h"

using namespace std;

DLinkedList::DLinkedList() {
	header = new DNode;
	trailer = new DNode;
	header->next = trailer;
	trailer->prev = header;
}



DLinkedList::~DLinkedList() {
	while (!empty()) removeFront();
	delete header;
	delete trailer;
}



bool DLinkedList::empty() const
{
	return (header->next == trailer);
}

const string& DLinkedList::front() const
{
	return header->next->elem;
}

const string& DLinkedList::back() const
{
	return trailer->prev->elem;
}



void DLinkedList::add(DNode* v, const string& e) {
	DNode* u = new DNode;
	u->elem = e;
	u->next = v;
	u->prev = v->prev;
	v->prev->next = u;
	v->prev = u;
}

void DLinkedList::addFront(const string& e)
{
	add(header->next, e);
}

void DLinkedList::addBack(const string& e)
{
	add(trailer, e);
}



void DLinkedList::remove(DNode* v) {
	DNode* u = v->prev;
	DNode* w = v->next;
	u->next = w;
	w->prev = u;
	delete v;
}

void DLinkedList::removeFront()
{
	remove(header->next);
}

void DLinkedList::removeBack()
{
	remove(trailer->prev);
}



void DLinkedList::prtAllList() {
	DNode* m = header->next;
	cout << "현재 리스트:	";

	while (!(m == trailer)) {
		cout << m->elem;
		cout << "	";
		m = m->next;
	}
	cout << "" << endl;
}