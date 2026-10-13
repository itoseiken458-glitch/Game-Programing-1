#include <iostream>
using namespace std;

int main() {
	int value = 0;
	while (true) {
		cout << "整数値を入力してください > " << endl;
		cin >> value;
		if (value == 0) {
			break;
		}
		cout << value << endl;
	}
	cout << "プログラムを終了します" << endl;
}