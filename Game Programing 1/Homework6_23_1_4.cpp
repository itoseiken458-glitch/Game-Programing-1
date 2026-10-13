#include <iostream>
using namespace std;

void zero(int* array) {
	for (int* p = array; p != &array[5]; ++p) {
		*p = 0;
	}
}

void show(int* array) {
	for (int* p = array; p != &array[5]; ++p) {
		cout << *p << endl;
	}
}

int main() {
	int a[5];
	zero(a);
	show(a);
}