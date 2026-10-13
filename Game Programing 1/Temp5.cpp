#include <iostream>
using namespace std;

void sort(int* a, int* b, int* c);
void swap(int* a, int* b);

int main() {
	int a = 7; int b = 4; int c = 1;
	sort(&a, &b, &c);

	cout << a << b << c;
}

void sort(int* a, int* b, int* c) {

	if (*a > *b) swap(a, b);
	if (*b > *c) swap(b, c);
	if (*a > *b) swap(a, b);
}

void swap(int* a, int* b) {

	int c = *a;

	*a = *b;
	*b = c;
}