#include <iostream>
using namespace std;

void ValueInput(int& value);
void FizzBuzz(int value);

int main() {
	int value = 0;
	ValueInput(value);
	FizzBuzz(value);
}

void ValueInput(int& value) {
	cout << "数値を入力してください" << endl;
	cin >> value;
}

void FizzBuzz(int value) {
	if (value < 1 || value > 100) {
		cout << "1～100の範囲にない数値が入力されました" << endl;
	}
	else {
		if (value % 3 == 0 && value % 5 == 0) {
			cout << "FizzBuzz" << endl;
		}
		else if (value % 3 == 0) {
			cout << "Fizz" << endl;
		}
		else if (value % 5 == 0) {
			cout << "Buzz" << endl;
		}
	}
}