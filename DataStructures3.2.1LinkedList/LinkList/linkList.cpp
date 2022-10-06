#include <iostream>
#include <string>

using namespace std;

class StringNode { //StringNode Ŭ����
private:
	string elem;
	StringNode* next;

	friend class StringLinkedList;
};



class StringLinkedList { //StringLinkedList Ŭ����
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



StringLinkedList::StringLinkedList() //StringLinkedList Ŭ������ ������
	:head(NULL) { }

StringLinkedList::~StringLinkedList()
{
	while (!empty())
	{
		removeFront();
	}
}
bool StringLinkedList::empty() const //��尡 ����ִ��� boolŸ������ �����ϴ� �Լ�
{
	return head == NULL;
}

const string& StringLinkedList::front() const //��ũ ����Ʈ�� ���� ù ��° ���ڿ��� �����ϴ� �Լ�
{
	return head->elem;
}



void StringLinkedList::addFront(const string& e) { //StringNode�� ��ü�� ��ũ ����Ʈ�� �� �տ� �߰�
	StringNode* v = new StringNode;
	v->elem = e;
	v->next = head;
	head = v;
}



void StringLinkedList::removeFront() { //��ũ ����Ʈ ���� ���� ��ü ����
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