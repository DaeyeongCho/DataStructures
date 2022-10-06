#include <iostream>
#include <string>
#include "DLinkedList.h"

using namespace std;

int main() {
	cout << "[ DLinkedList list; ] 입력" << endl;
	DLinkedList list;

	list.prtAllList();
	cout << "맨 앞 출력:	";
	cout << list.front() << endl;
	cout << "맨 뒤 출력:	";
	cout << list.back() << endl;
	cout << "" << endl;


	cout << "[ addFront(\"ABC\"); ] 입력" << endl;
	list.addFront("ABC");

	list.prtAllList();
	cout << "맨 앞 출력:	";
	cout << list.front() << endl;
	cout << "맨 뒤 출력:	";
	cout << list.back() << endl;
	cout << "" << endl;


	cout << "[ addBack(\"DEF\"); ] 입력" << endl;
	list.addBack("DEF");

	list.prtAllList();
	cout << "맨 앞 출력:	";
	cout << list.front() << endl;
	cout << "맨 뒤 출력:	";
	cout << list.back() << endl;
	cout << "" << endl;


	cout << "[ addFront(\"GHI\"); ] 입력" << endl;
	list.addFront("GHI");

	list.prtAllList();
	cout << "맨 앞 출력:	";
	cout << list.front() << endl;
	cout << "맨 뒤 출력:	";
	cout << list.back() << endl;
	cout << "" << endl;


	cout << "[ removeBack(); ] 입력" << endl;
	list.removeBack();

	list.prtAllList();
	cout << "맨 앞 출력:	";
	cout << list.front() << endl;
	cout << "맨 뒤 출력:	";
	cout << list.back() << endl;
	cout << "" << endl;


	cout << "[ removeFront(); ] 입력" << endl;
	list.removeFront();

	list.prtAllList();
	cout << "맨 앞 출력:	";
	cout << list.front() << endl;
	cout << "맨 뒤 출력:	";
	cout << list.back() << endl;
	cout << "" << endl;

	return 0;
}