#include <iostream>
using namespace std;

int inputValue;
int inputValue2;

void Input() {
	cout << "2つの値を入力してください " << endl;
	cin >> inputValue >> inputValue2;
}

void Show(int value, int value2) {
	if (value < value2) {
		cout << value2 << "  " << value << endl;
	}
	else if (value > value2) {
		cout << value << "  " << value2 << endl;
	}
	else {
		cout << "等しい値が入力されました" << endl;
	}

}

int main() {
	Input();
	Show(inputValue, inputValue2);
}