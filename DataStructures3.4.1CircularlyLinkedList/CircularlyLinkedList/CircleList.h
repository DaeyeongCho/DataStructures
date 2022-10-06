#pragma once
#ifndef CLINKEDLIST_H
#define CLINKEDLIST_H
#include "CNode.h"
#include <iostream>
#include <string>

using namespace std;

class CircleList {
public:
	CircleList();
	~CircleList();
	bool empty() const;
	const string& front() const;
	const string& back() const;
	void advance();
	void add(const string& e);
	void remove();
	void prtList();
private:
	CNode* cursor;
};

#endif