#include <iostream>
using namespace std;

void show(int* array, int arraysize) {
	for (int i = 0; i < arraysize; ++i) {
		cout << array[i] << endl;
	}
}

int main() {
	int a[10][10];
	show(&a[0][0], 100);

}