#include <iostream>
using namespace std;

void sumSub(int& ref1, int& ref2, int a, int b);

int main() {
	int ref1 = 0;
	int ref2 = 0;
	 sumSub(ref1, ref2, 32767, 65536);
	 cout << ref1 << endl<< ref2;

}

void sumSub(int& ref1, int& ref2, int a, int b) {
	ref1 = a + b;
	ref2 = a - b;
}