#include <iostream>
using namespace std;

int main() {
	int a, b;

	cout << "2つ値を入力してください > " << flush;
	cin >> a >> b;

	cout << "大きいほうの値は" << (a > b ? a : b) << "です" << endl;
}