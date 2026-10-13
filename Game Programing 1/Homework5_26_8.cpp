#include <iostream>
using namespace std;

int main() {
	int value = 0;
	while (true)
	{
		cout << "値を入力してください" << endl;
		cin >> value;
		if (value == -1) {
			break;
		}
		cout << value << endl;
	}
}