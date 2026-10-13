#include <iostream>
using namespace std;

int main() {
	int counter = 0;
	int x = 0 ;
	while (counter < 5) {
		cout << "数値を入力してください > " << endl;
		cin >> x;
		cout << x << endl;
		if (x > 0) {
			counter++;
		}
	}
}