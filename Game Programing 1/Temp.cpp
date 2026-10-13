#include <iostream>
using namespace std;

int main() {
	int a = 0;
	int hairetu[10];
	for (int i = 0; i < 10; ++i) {
		hairetu[i] = i * 5;
	}

	cout << "配列のどの箱の数字が欲しいですか > " << endl;
	cin >> a;
	cout << hairetu[a] << endl;
}