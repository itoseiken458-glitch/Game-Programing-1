#include <iostream>
using namespace std;

int  average(int score[]);

int main() {
	int score[5];
	cout << "配列score[0]に入れる数値を入力してください" << endl;
	cin >> score[0];
	cout << "配列score[1]に入れる数値を入力してください" << endl;
	cin >> score[1];
	cout << "配列score[2]に入れる数値を入力してください" << endl;
	cin >> score[2];
	cout << "配列score[3]に入れる数値を入力してください" << endl;
	cin >> score[3];
	cout << "配列score[4]に入れる数値を入力してください" << endl;
	cin >> score[4];

	cout << average(score);
}

int average(int score[]) {
	int sum = 0;
	int ret = 0;
	for (int i = 0; i < 5; ++i) {
		sum += score[i];
	}
	ret = sum / 5.0;
		return ret;
}