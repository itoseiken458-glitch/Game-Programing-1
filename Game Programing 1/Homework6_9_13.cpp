#include <iostream>
using namespace std;

int main() {
	char e[32];
	char f[32];
	cout << "文字列を2つ入れてください" << endl;
	cin >> e >> f;
	int ret = 0;
	ret = strcmp(e, f);

	if (ret == 0) {
		cout << "文字列は等しいです。" << endl;
	}
	else if (ret != 0) {
		cout << "文字列は等しくないです" << endl;
	}
}