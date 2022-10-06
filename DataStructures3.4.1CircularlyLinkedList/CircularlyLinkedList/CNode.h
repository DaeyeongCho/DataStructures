#pragma once
#ifndef CNODE_H
#define CNODE_H

#include <iostream>
#include <string>

using namespace std;

class CNode {
private:
	string elem;
	CNode* next;

	friend class CircleList;
};

#endif