#include <iostream>
using namespace std;

int g_inputValue = 0;

void InputValue() {
	cout << "何月か入力してください" << endl;
	cin >> g_inputValue;
}

void ShowMonth(int inputValue) {
	switch (inputValue) {
	case 3:
	case 4:
	case 5:
		cout << "春ですね" << endl; break;
	case 6:
	case 7:
	case 8:
		cout << "夏ですね" << endl; break;
	case 9:
	case 10:
	case 11:
		cout << "秋ですね" << endl; break;
	case 12:
	case 1:
	case 2:
		cout << "冬ですね" << endl; break;
	default:
		cout << "春夏秋冬" << endl;

	}
}


int main() {
	InputValue();
	ShowMonth(g_inputValue);
}