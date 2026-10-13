#include <iostream>
using namespace std;

int main() {
	char inputString1[64];
	char inputString2[32];
	cout << "連結したい文字列を2つ入力してください" << endl;
	cin >> inputString1 >> inputString2;
	strcat_s(inputString1, inputString2);
	for (int i = 0; inputString1[i] != '\0'; ++i) {
		cout << inputString1[i];
	}
}