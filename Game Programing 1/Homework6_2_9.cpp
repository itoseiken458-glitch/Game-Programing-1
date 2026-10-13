#include <iostream>

using namespace std;

int sum(int x, int y, int& ref);

int main() {
	int ret;
	int a = 32767;
	int b = 255;
	int ref1 = 0;
	ret = sum(a, b, ref1);
	cout << ret << "  " << ref1 << endl;
}

int sum(int x, int y, int& ref) {
	ref = x - y;
	return x + y;
}