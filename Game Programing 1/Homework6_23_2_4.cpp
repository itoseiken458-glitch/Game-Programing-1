#include <iostream>
using namespace std;

void showStr(const char* str) {
	cout << str << endl;
}

int main() {
	char a[32];
	cout << "文字列を入力を入力してください" << endl;
	cin >> a;
	showStr(a);
}