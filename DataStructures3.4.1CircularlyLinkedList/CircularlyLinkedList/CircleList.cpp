#include <iostream>
#include <string>
#include "CNode.h"
#include "CircleList.h"

using namespace std;

CircleList::CircleList()
	: cursor(NULL) {}

CircleList::~CircleList() {
	while (!empty()) remove();
}



bool CircleList::empty() const {
	return cursor == NULL;
}



const string& CircleList::back() const {
	return cursor->elem;
}

const string& CircleList::front() const {
	return cursor->next->elem;
}



void CircleList::advance() {
	cursor = cursor->next;
}



void CircleList::add(const string& e) {
	CNode* v = new CNode;
	v->elem = e;
	if (cursor == NULL) {
		v->next = v;
		cursor = v;
	}
	else {
		v->next = cursor->next;
		cursor->next = v;
	}
}



void CircleList::remove() {
	CNode* old = cursor->next;
	if (old == cursor) {
		cursor = NULL;
	}
	else {
		cursor->next = old->next;
		delete old;
	}
}



void CircleList::prtList() {
	CNode* m = cursor->next;
	while (m != cursor) {
		cout << m->elem;
		cout << " - ";
		m = m->next;
	}
	cout << m->elem;
	cout << "" << endl;
}