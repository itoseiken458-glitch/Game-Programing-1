#include <iostream>
#include <ctime>
using namespace std;

int main() {
	srand((unsigned int)time(NULL));
	int array[100] = {};

	for (int i = 0; i < 100; ++i) {
		array[i] = rand();
	}

	for (int i = 0; i < 100; ++i) {
		cout << array[i] << endl;
	}


	for (int i = 0; i < 100; ++i) {
		int j = rand() % (100 -i) +  i;
		int  c = array[i];
		array[i] = array[j];
		array[j] = c;
	}

	cout << endl;
	for (int i = 0; i < 100; ++i) {
		cout << array[i] << endl;
	}
}