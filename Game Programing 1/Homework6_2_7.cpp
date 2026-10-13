#include <iostream>

using namespace std;

int sum(int x, int y);

int main() {
	int ret;
	int a = 32767;
	int b = 255;
	ret = sum(a, b);
	cout << ret << endl;
}

int sum(int x, int y) {
	return x + y;
}