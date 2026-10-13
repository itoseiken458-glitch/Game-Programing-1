#include <iostream>
using namespace std;

int main() {
	while (true) {
		int a = 0;
		cout << "表示したい値を入力してください" << endl;
		cin >> a;
		if (a == -1) {
			break;
		}
		cout << a << endl;
	}
}