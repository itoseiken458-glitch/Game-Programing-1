#include <iostream>
using namespace std;


int main() {
	int a  =0;
	char b = '0';
	double c = 0.01;

	int* intpointer = &a;
	char* charpointer = &b;
	double* doublepointer =&c;

	*intpointer = 5;
	cout << "a = " << a << endl
		<< "*intpointer =" << *intpointer << endl;
	cout << "address = " << (size_t)intpointer << endl;

	*charpointer = '1';
	cout << "b = " << b << endl
		<< "*charpointer = " << *charpointer << endl;
	cout << "address = " << (size_t)charpointer << endl;

	*doublepointer = 0.32767;
	cout << "c = " << c << endl
		 << "*doublepointer = " << *doublepointer << endl;
	cout << "address = " << (size_t)doublepointer << endl;
}