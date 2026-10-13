#include <iostream>
using namespace std;

int main() {
	int array[32][32];

	for (int i = 0; i < 32; ++i) {
		for (int j = 0; j < 32; ++j) {
			array[i][j] = rand();
		}
	}

	for (int i = 0; i < 32; ++i) {
		for (int j = 0; j < 32; ++j) {
			cout << array[i][j] << endl;
		}
	}

	int sum = 0;

	for (int i = 0; i < 32; ++i) {
		for (int j = 0; j < 32; ++j) {
			sum += array[i][j];
		}
	}
	cout << sum << endl;

	cout << endl;

	for (int i = 0; i < 32; ++i) {
		double sum2 = 0.0;
		double average;
		for (int j = 0; j < 32; ++j) {
			sum2 += array[i][j];
		}
		average = sum2 / 32.0;
		cout << average << endl;
	}

}