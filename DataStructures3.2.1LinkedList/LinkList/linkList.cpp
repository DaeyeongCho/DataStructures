#include <iostream>
#include <string>

using namespace std;

class StringNode { //StringNode 클래스
private:
	string elem;
	StringNode* next;

	friend class StringLinkedList;
};



class StringLinkedList { //StringLinkedList 클래스
public:
	StringLinkedList();
	~StringLinkedList();
	bool empty() const;
	const string& front() const;
	void addFront(const string& e);
	void removeFront();
private:
	StringNode* head;
};



StringLinkedList::StringLinkedList() //StringLinkedList 클래스의 생성자
	:head(NULL) { }

StringLinkedList::~StringLinkedList()
{
	while (!empty())
	{
		removeFront();
	}
}
bool StringLinkedList::empty() const //헤드가 비어있는지 bool타입으로 리턴하는 함수
{
	return head == NULL;
}

const string& StringLinkedList::front() const //링크 리스트의 가장 첫 번째 문자열을 리턴하는 함수
{
	return head->elem;
}



void StringLinkedList::addFront(const string& e) { //StringNode의 객체를 링크 리스트의 맨 앞에 추가
	StringNode* v = new StringNode;
	v->elem = e;
	v->next = head;
	head = v;
}



void StringLinkedList::removeFront() { //링크 리스트 가장 앞의 객체 삭제
	StringNode* old = head;
	head = old->next;
	delete old;
}



int main() {
	StringLinkedList sl1;

	sl1.addFront("ABC");
	sl1.addFront("DEF");
	sl1.addFront("GHI");
	sl1.addFront("JKL");
	sl1.addFront("MNO");
	sl1.addFront("PQR");
	sl1.addFront("STU");
	sl1.addFront("VWX");

	while(!sl1.empty()) {
		cout << sl1.front() << endl;
		sl1.removeFront();
	}

	return 0;
}