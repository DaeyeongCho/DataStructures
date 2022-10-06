#include <iostream>
#include <string>
#include "CircleList.h"

using namespace std;

int main() {
	cout << "CircleList list; 입력" << endl;
	CircleList list;
	cout << "\n\n" << endl;

	cout << "list.add(\"ABC\"); 입력" << endl;
	list.add("ABC");
	cout << "" << endl;

	cout << "list.prtList()	입력 결과: ";
	list.prtList();
	cout << "" << endl;

	cout << "list.front()	입력 결과: ";
	cout << list.front() << endl;
	cout << "" << endl;

	cout << "list.back()	입력 결과: ";
	cout << list.back() << endl;
	cout << "\n\n" << endl;

	cout << "list.add(\"DEF\"); 입력" << endl;
	list.add("DEF");
	cout << "" << endl;

	cout << "list.prtList()	입력 결과: ";
	list.prtList();
	cout << "" << endl;

	cout << "list.front()	입력 결과: ";
	cout << list.front() << endl;
	cout << "" << endl;

	cout << "list.back()	입력 결과: ";
	cout << list.back() << endl;
	cout << "\n\n" << endl;

	cout << "list.add(\"GHI\"); 입력" << endl;
	list.add("GHI");
	cout << "" << endl;

	cout << "list.prtList()	입력 결과: ";
	list.prtList();
	cout << "" << endl;

	cout << "list.front()	입력 결과: ";
	cout << list.front() << endl;
	cout << "" << endl;

	cout << "list.back()	입력 결과: ";
	cout << list.back() << endl;
	cout << "\n\n" << endl;

	cout << "list.advance(); 입력 " << endl;
	list.advance();
	cout << "" << endl;

	cout << "list.prtList()	입력 결과: ";
	list.prtList();
	cout << "" << endl;

	cout << "list.front()	입력 결과: ";
	cout << list.front() << endl;
	cout << "" << endl;

	cout << "list.back()	입력 결과: ";
	cout << list.back() << endl;
	cout << "\n\n" << endl;

	cout << "cout << list.remove(); 입력 " << endl;
	list.remove();
	cout << "" << endl;

	cout << "list.prtList()	입력 결과: ";
	list.prtList();
	cout << "" << endl;

	cout << "list.front()	입력 결과: ";
	cout << list.front() << endl;
	cout << "" << endl;

	cout << "clist.back()	입력 결과: ";
	cout << list.back() << endl;
	cout << "\n\n" << endl;

	cout << "cout << list.remove(); 입력 " << endl;
	list.remove();
	cout << "" << endl;

	cout << "list.prtList()	입력 결과: ";
	list.prtList();
	cout << "" << endl;

	cout << "list.front()	입력 결과: ";
	cout << list.front() << endl;
	cout << "" << endl;

	cout << "clist.back()	입력 결과: ";
	cout << list.back() << endl;
	cout << "\n\n" << endl;
	
	cout << "cout << list.remove(); 입력 " << endl;
	list.remove();
	cout << "" << endl;

	/*cout << list.front() << endl;
	cout << list.back() << endl;*/

	return 0;
}