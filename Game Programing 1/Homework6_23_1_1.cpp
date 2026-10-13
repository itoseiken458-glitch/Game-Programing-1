#include	<iostream>
using namespace std;

void dispArray10(int* array) {
	for (int* p = array; p != &array[10];++p) {
		cout << *p << endl;
	}
}

int main() {
	int a[10] = { 0,1,2,3,4,5,6,7,8,9 };
	dispArray10(a);
}