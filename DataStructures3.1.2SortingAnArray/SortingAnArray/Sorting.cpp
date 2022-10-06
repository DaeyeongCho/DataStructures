#include <iostream>

using namespace std;

void insertionSort(char* A, int n) { //���ڸ� �迭 �ȿ� ������� �����Ͽ� �־��ִ� �Լ�. A�� �迭 ��ü, n�� �迭�� ����
	for (int i = 1; i < n; i++) { //�迭�� ���� - 1��ŭ �ݺ�
		char cur = A[i]; //A[i]�� �� �� ��°�� ��
		int j = i - 1; //j�� �� �� ���� �ٷ� ���� ��
		while ((j >= 0) && (A[j] > cur)) { //�� �� ���� �ٷ� ���� ���� ���Ͽ� ���� ���� �� ���������� �ݺ�
			A[j + 1] = A[j]; //���� �� ��ġ�� ���� ���� ����
			j--;
		}
		A[j + 1] = cur; //���� ���� ���̾��� �ڸ��� ���� �� ����
	}
}



int main() {
	char charArray[8];
	charArray[0] = 'B';
	charArray[1] = 'C';
	charArray[2] = 'D';
	charArray[3] = 'A';
	charArray[4] = 'E';
	charArray[5] = 'H';
	charArray[6] = 'G';
	charArray[7] = 'F';

	insertionSort(charArray, 8);

	for (int i = 0; i < 8; i++) { //��� �ݺ���
		cout << charArray[i] << endl;
	}

	return 0;
}