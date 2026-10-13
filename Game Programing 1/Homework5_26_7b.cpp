#include <iostream>
using namespace std;

int main() {
	int i = 0;
	while (i < 5) {
		int x;
		cout << "値を入力してください >" << endl;
		cin >> x;
		if (x <= 0) {
			continue;
		}
		++i;
	}
}