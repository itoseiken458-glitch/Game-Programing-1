#include <iostream>
using namespace std;

int Calc(int a, int b, int& r) {
	if (b == 0) {
		return 1;
		r = 0;
	}
	else {
		r = a / b;
		return 0;
	}
}

int main() {
	int r;
	srand(1);
	int a = 5;
	int b = 9;
	if (Calc(a,b,r) == 0) {
		cout << "正常に終了しました。商は" << r << "です" << endl;
	}
	else {
		cout << "異常に終了しました" << endl;
	}
}