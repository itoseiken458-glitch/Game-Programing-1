#include <iostream>
using namespace std;

int main() {
	int inputValue;
	int counter = 0;
	cout << "約数を求めたい数値を入力してください > " << endl;
	cin >> inputValue;
	if (inputValue > 0) {
		for (int i = 1; i <= inputValue; ++i) {
			if (inputValue % i == 0) {
				cout << i << endl;
				++counter;
			}
		}

		cout << "約数の数は" << counter << "個です" << endl;
	}
	if (inputValue == 0) {
		cout << "全ての整数が約数　または　0でない全ての整数が約数　または　そもそも0は約数の定義で弾かれます" << endl;
	}
	if (inputValue < 0) {
		for (int i = -1; i >= inputValue; --i) {
			if (inputValue % i == 0) {
				cout << i << endl;
				++counter;
			}
		}

		cout << "約数の数は" << counter << "個です" << endl;
	}
}