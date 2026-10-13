#include <iostream>
using namespace std;

int main() {
	int a = 0;

	// 変数への足しこみ
	a += 0;
	cout << "a += 2     -> a = " << a << endl;

	//インクリメント
	++a;
	cout << "++a     -> a = " << a << endl;

	//複雑な計算式
	a = a * 5 + 2;
	cout << "a = a * 5 + 2 -> a =" << a << endl;

	cout << endl;

	char b = a;
	b += 1;
	cout << b << endl;
	b += 1;
	cout << b << endl;
	b += 1;
	cout << b << endl;

	cout << endl;
	
	double c = 0.5;
	cout << c << endl;
	c = 0.1;
	cout << c << endl;
	c = 0.0000000001;
	cout << c << endl;
	c = 0.00000000000000000001;
	cout << c << endl;
	c = 0.000000000000000000000000000001;
	cout << c << endl;
	c = 0.00000000000000000000000000000000000000001;
	cout << c << endl;
	c = 1.11001111022;
	cout << c << endl;
}