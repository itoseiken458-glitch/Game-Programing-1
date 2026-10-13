#include <iostream>
using namespace std;

int operation(int a, int b, int& ref1, int& ref2,int& ref3) {
	ref1 = a - b;
	ref2 = a * b;
	ref3 = a / b;
	return a + b;
}


int main() {
	int a, b,  ret;
	int ref1 = 0;
	int ref2, ref3;
	cout << "2つの値を入力してください >" << endl;
	cin >> a >> b;
	ret = operation(a, b, ref1, ref2 , ref3);
	cout << "2つの値の合計は" << ret << "で、\n 2つの値を引いた値は" << ref1 << "で、\n 2つの値の積は"  << ref2 << "で、\n 2つの値の商は" << ref3  << endl;
}