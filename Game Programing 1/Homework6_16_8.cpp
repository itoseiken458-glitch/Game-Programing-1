#include <iostream>
using namespace std;

int sum(int x, int y);

int main() {
	cout << sum(32767, 65536) << endl;
}

int sum(int x, int y) {
	return x + y;
}