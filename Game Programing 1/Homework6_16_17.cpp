#include <iostream>
using namespace std;

int main() {
	int inputValue;
	cout << "何段のピラミッドを表示しますか？" << endl;
	cin >> inputValue;
	for (int i = 0; i <= inputValue; ++i) {
		cout << endl;
		for (int j = 0; j < inputValue - ((i - 1) * 2 + 1)/2; ++j) {
			cout << " " << flush;
		}
		for (int k = 0; k < (i - 1) * 2 + 1; ++k) {
			cout << "*" << flush;
		}
	}
}