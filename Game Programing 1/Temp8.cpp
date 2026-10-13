#include <iostream>
using namespace std;

void babllesort(int* p, int arraysize) {
	for (int i = 1; arraysize - i >= 0; ++i) {
		if (p[i - 1] > p[i]) {
			int c = p[i - 1];
			p[i - 1] = p[i];
			p[i] = c;

		}
		}

}

int main() {
	int a[100];
	int arraysize = 100;
	for (int i = 0; i < 100; ++i) {
		a[i] = rand();
	}

	babllesort(a, arraysize);

	for (int i = 0; i < 100; ++i) {
		cout << a[i] << endl;
	}
}