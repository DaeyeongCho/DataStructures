#include <iostream>
#include <string>
#include "DLinkedList.h"

using namespace std;

int main() {
	cout << "[ DLinkedList list; ] �Է�" << endl;
	DLinkedList list;

	list.prtAllList();
	cout << "�� �� ���:	";
	cout << list.front() << endl;
	cout << "�� �� ���:	";
	cout << list.back() << endl;
	cout << "" << endl;


	cout << "[ addFront(\"ABC\"); ] �Է�" << endl;
	list.addFront("ABC");

	list.prtAllList();
	cout << "�� �� ���:	";
	cout << list.front() << endl;
	cout << "�� �� ���:	";
	cout << list.back() << endl;
	cout << "" << endl;


	cout << "[ addBack(\"DEF\"); ] �Է�" << endl;
	list.addBack("DEF");

	list.prtAllList();
	cout << "�� �� ���:	";
	cout << list.front() << endl;
	cout << "�� �� ���:	";
	cout << list.back() << endl;
	cout << "" << endl;


	cout << "[ addFront(\"GHI\"); ] �Է�" << endl;
	list.addFront("GHI");

	list.prtAllList();
	cout << "�� �� ���:	";
	cout << list.front() << endl;
	cout << "�� �� ���:	";
	cout << list.back() << endl;
	cout << "" << endl;


	cout << "[ removeBack(); ] �Է�" << endl;
	list.removeBack();

	list.prtAllList();
	cout << "�� �� ���:	";
	cout << list.front() << endl;
	cout << "�� �� ���:	";
	cout << list.back() << endl;
	cout << "" << endl;


	cout << "[ removeFront(); ] �Է�" << endl;
	list.removeFront();

	list.prtAllList();
	cout << "�� �� ���:	";
	cout << list.front() << endl;
	cout << "�� �� ���:	";
	cout << list.back() << endl;
	cout << "" << endl;

	return 0;
}