#include <iostream>
#include <string>
#include "CircleList.h"

using namespace std;

int main() {
	cout << "CircleList list; �Է�" << endl;
	CircleList list;
	cout << "\n\n" << endl;

	cout << "list.add(\"ABC\"); �Է�" << endl;
	list.add("ABC");
	cout << "" << endl;

	cout << "list.prtList()	�Է� ���: ";
	list.prtList();
	cout << "" << endl;

	cout << "list.front()	�Է� ���: ";
	cout << list.front() << endl;
	cout << "" << endl;

	cout << "list.back()	�Է� ���: ";
	cout << list.back() << endl;
	cout << "\n\n" << endl;

	cout << "list.add(\"DEF\"); �Է�" << endl;
	list.add("DEF");
	cout << "" << endl;

	cout << "list.prtList()	�Է� ���: ";
	list.prtList();
	cout << "" << endl;

	cout << "list.front()	�Է� ���: ";
	cout << list.front() << endl;
	cout << "" << endl;

	cout << "list.back()	�Է� ���: ";
	cout << list.back() << endl;
	cout << "\n\n" << endl;

	cout << "list.add(\"GHI\"); �Է�" << endl;
	list.add("GHI");
	cout << "" << endl;

	cout << "list.prtList()	�Է� ���: ";
	list.prtList();
	cout << "" << endl;

	cout << "list.front()	�Է� ���: ";
	cout << list.front() << endl;
	cout << "" << endl;

	cout << "list.back()	�Է� ���: ";
	cout << list.back() << endl;
	cout << "\n\n" << endl;

	cout << "list.advance(); �Է� " << endl;
	list.advance();
	cout << "" << endl;

	cout << "list.prtList()	�Է� ���: ";
	list.prtList();
	cout << "" << endl;

	cout << "list.front()	�Է� ���: ";
	cout << list.front() << endl;
	cout << "" << endl;

	cout << "list.back()	�Է� ���: ";
	cout << list.back() << endl;
	cout << "\n\n" << endl;

	cout << "cout << list.remove(); �Է� " << endl;
	list.remove();
	cout << "" << endl;

	cout << "list.prtList()	�Է� ���: ";
	list.prtList();
	cout << "" << endl;

	cout << "list.front()	�Է� ���: ";
	cout << list.front() << endl;
	cout << "" << endl;

	cout << "clist.back()	�Է� ���: ";
	cout << list.back() << endl;
	cout << "\n\n" << endl;

	cout << "cout << list.remove(); �Է� " << endl;
	list.remove();
	cout << "" << endl;

	cout << "list.prtList()	�Է� ���: ";
	list.prtList();
	cout << "" << endl;

	cout << "list.front()	�Է� ���: ";
	cout << list.front() << endl;
	cout << "" << endl;

	cout << "clist.back()	�Է� ���: ";
	cout << list.back() << endl;
	cout << "\n\n" << endl;
	
	cout << "cout << list.remove(); �Է� " << endl;
	list.remove();
	cout << "" << endl;

	/*cout << list.front() << endl;
	cout << list.back() << endl;*/

	return 0;
}