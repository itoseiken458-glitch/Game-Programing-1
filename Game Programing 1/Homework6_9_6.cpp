#include <iostream>
using namespace std;

int min3(int a, int b, int c);

int main() {
	int a, b, c;
	cout << "3つの数値を入力してください" << endl;
	cin >> a >> b >> c;

	cout << min3(a, b, c) << endl;
}

int min3(int a, int b, int c) {
	if (a < b && a < c) {
		return a;
	}
	else if (b < a && b < c) {
		return b;
	}
	else if (c < a && c < b) {
		return c;
	}
	else {
		cout << "等しい値が2つまたは3つあります" << endl;
		return 0;
	}
}