#include <iostream>
using namespace std;

int main() {
	char inputString[32];
	cout << "暗号化したい文字列を入力してください" << endl;
	cin >> inputString;
	char temp[32];
	char eclipse[32];
	int counter = 0;
	for (int i = 0; inputString[i] != '\0'; ++i) {
		temp[i] = ((int)(unsigned char)inputString[i]) +2;
		++counter;
	}
	cout << counter << endl;
	for (int i = 0;counter - i - 1 >= 0; ++i) {
		eclipse[i] = temp[counter - i - 1];
		if (counter - i - 1 == 0) {
			eclipse[i + 1] = '\0';
		}
	}

	for (int i = 0; eclipse[i] != '\0'; ++i) {
		cout << eclipse[i];
	}
}