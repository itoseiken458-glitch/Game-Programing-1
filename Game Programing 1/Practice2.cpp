#include <iostream>
using namespace std;

void show(int* array, int arraysize) {
	for (int* p = array; p != &array[(arraysize-1)*(arraysize-1)]; ++p) {
		cout << *p << endl;
	}
}

int main() {
	int a[10][10];
	for (int* p = &a[0][0]; p != &a[9][9]; ++p) {
		*p = rand();
	}
	show(&a[0][0], 10);
}