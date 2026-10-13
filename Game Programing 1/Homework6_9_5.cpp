#include <iostream>
using namespace std;

int abs(int a);

int main() {
	int a;
	cout << "数値を入力してください" << endl;
	cin >> a;
	cout << abs(a) << endl;
}


int abs(int a) {
	if (a >= 0) {
		return a;
	}
	else if (a < 0) {
		return -a;
	}
}