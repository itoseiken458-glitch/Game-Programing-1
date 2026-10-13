#include <iostream>
using namespace std;

int  sum3(int a, int b, int c);

int main() {
	int ret = 0;
	ret = sum3(32767, 65536, 256);
	cout << ret << endl;
}

int sum3(int a, int b, int c) {
	return a + b + c;
}