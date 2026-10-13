#include <iostream>
#include <ctime>
using namespace std;

int main() {
	srand((unsigned int)time(NULL));
	int a = 0;
	a = rand() % 9 + 1;
	while (true) {
		int b = 0;
		cout << "1～10までの数字を当ててね" << endl;
		cin >> b;
		if (a == b) {
			cout << "正解です";
			break;
		}
		else if(b < a) {
			cout << "目的の値は入力された数値よりも大きい！" << endl;
		}
		else if (b > a) {
			cout << "目的の値は入力された数値よりも小さい！" << endl;
		}

	}
}