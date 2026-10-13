#include <iostream>
using namespace std;

int main() {
	int inputValue;
	cout << "桁数を出力したい数値を入力してください >" << endl;
	cin >> inputValue;
	int counter = 0;
	for (int i = 0;inputValue > 0; ++i) {
		inputValue /= 10;
		++counter;
	}

	cout << counter << endl;
}