#include <iostream>
using namespace std;

int InputValue = 0;

void inputValue() {
	cout << "1～3までの数値を入力してください" << endl;
	cin >> InputValue;
}

void Show(int value) {
	switch (value) {
	case 1:
		cout << "グー" << endl; break;
	case 2:
		cout << "チョキ" << endl; break;
	case 3:
		cout << "パー" << endl; break;
	default:
		cout << "エラーです" << endl;
	}
}


int main() {
	inputValue();
	Show(InputValue);
}

