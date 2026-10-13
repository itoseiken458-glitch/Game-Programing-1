#include<iostream>
using namespace std;

int main() {
	int  a[100];
	int b;
	for (int i = 0; i < 100; ++i) {
		a[i] = rand();
	}
	cout << "検索したい数値を入力してください" << endl;
	cin >> b;
	for (int i = 0;i < 100; ++i) {
		if (a[i] == b) {
			cout << "見つかりました、インデックス" << i << "番目の値です" << endl;
		}
	}
}