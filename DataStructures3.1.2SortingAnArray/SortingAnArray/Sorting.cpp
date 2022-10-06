#include <iostream>

using namespace std;

void insertionSort(char* A, int n) { //문자를 배열 안에 순서대로 정렬하여 넣어주는 함수. A는 배열 객체, n은 배열의 길이
	for (int i = 1; i < n; i++) { //배열의 길이 - 1만큼 반복
		char cur = A[i]; //A[i]는 비교 할 번째의 값
		int j = i - 1; //j는 비교 할 값의 바로 직전 값
		while ((j >= 0) && (A[j] > cur)) { //비교 할 값과 바로 직전 값을 비교하여 직전 값이 더 작을때까지 반복
			A[j + 1] = A[j]; //직전 값 위치에 비교할 값을 삽입
			j--;
		}
		A[j + 1] = cur; //원래 비교할 값이었던 자리에 직전 값 삽입
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

	for (int i = 0; i < 8; i++) { //출력 반복문
		cout << charArray[i] << endl;
	}

	return 0;
}