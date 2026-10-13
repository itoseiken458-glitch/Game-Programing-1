#include <iostream>
using namespace std;

int DivMod(int x, int y, int& r) {
	r = x % y;
	return x / y;
}

int main() {
	int a, b, r;
	cout << "割られる数を入力してください > " << endl;
	cin >> a;
	cout << "割る数を入力してください >" << endl;
	cin >> b;
	cout << "商は" << DivMod(a, b, r) << "余りは" << r << endl;
}