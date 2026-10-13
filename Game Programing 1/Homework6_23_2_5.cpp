#include <iostream>
#include <ctime>
using namespace std;

void initRandArray(int* parr, int size);

int main() {
	int a[32];
	srand((unsigned int)time(NULL));
	initRandArray(a, 32);
	for (int* p = a; p != &a[32]; ++p) {
		cout << *p << endl;
	}
}

void initRandArray(int* parr, int size) {
	for (int* p = parr; p != &parr[size]; ++p) {
		*p = rand() % 100 + 1;
	}
}