#include <iostream>
using namespace std;

int main() {

	int* p;
	{
		int c = 0;
		p = &c;
	}
	*p = 5;
	cout << *p;
}