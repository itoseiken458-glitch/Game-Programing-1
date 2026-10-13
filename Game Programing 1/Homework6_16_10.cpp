#include <iostream>
using namespace std;

int main() {
	char str[32];
	cout << "31文字までの文字列を入力してください" << endl;
	cin >> str;

	for (int i = 0; str[i] != '\0'; ++i) {
		cout << str[i];
	}
}