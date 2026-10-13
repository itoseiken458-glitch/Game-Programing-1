#include <iostream>

using namespace std;

void sum(int x, int y , int& ref);

int main() {
	int ret;
	int ref = 0;
	int a = 32767;
	int b = 255;
	sum(a, b, ref);
	cout << ref << endl;
}

void sum(int x, int y, int& ref) {
	ref = x + y;
}