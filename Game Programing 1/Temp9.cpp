#include <iostream>
using namespace std;

int main() {
	int array[9 * 9] = {};

	for (int i = 0; i < 9; ++i) {
		for (int j = 0; j < 9; ++j) {
			array[(i * 9) + j] = (i + 1) * (j + 1);
		}
	}


	for (int i = 0; i < 81; ++i) {
		cout << array[i] << " " << i << endl;
	}
}