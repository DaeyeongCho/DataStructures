#include <iostream>

using namespace std;

int recursiveFactorial(int n) {
	if (n == 0) {
		return 1;
	}
	else {
		return n * recursiveFactorial(n - 1);
	}
}

int main() {
	cout << recursiveFactorial(0) << endl;
	cout << recursiveFactorial(1) << endl;
	cout << recursiveFactorial(3) << endl;
	cout << recursiveFactorial(5) << endl;
	return 0;
}