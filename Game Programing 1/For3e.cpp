#include <iostream>
using namespace std;

int main() {
	int a = 0;
	for (a = 2100000000;; ) {
		cout << a << "  ";
		++a;
	}
}