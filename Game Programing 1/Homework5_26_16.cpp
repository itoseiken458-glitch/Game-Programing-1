#include <iostream>
using namespace std;

int value;

void InputValue() {
	cout << "1から100までの整数をいれてください" << endl;
	cin >> value;
}

// value < 1 && value > 100 は||を使う　0未満かつ100より大きい数は存在しない
void CheckValue(int value) {
	if (value < 1 && value > 100) {
		cout << "不正な値です" << endl;
	}
}


void CheckFizzBuzz(int value) {
	if (value % 3 == 0 && value % 5 == 0) {
		cout << "FizzBuzz" << endl;
	}
	else if (value % 3 == 0) {
		cout << "Fizz" << endl;
	}
	else if (value % 5 == 0) {
		cout << "Buzz" << endl;
	}
	else {
		cout << value << endl;
	}
}


int main() {

	
	InputValue();
	CheckValue(value);
	CheckFizzBuzz(value);
}