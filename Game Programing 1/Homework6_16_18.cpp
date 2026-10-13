#include <iostream>
#include <ctime>
using namespace std;

int main() {
	srand((unsigned int)time(NULL));
	int targetNumber = rand() % 10 + 1;
	int inputValue = 0;
	cout << "1～10までの数字を当ててください" << endl;;
	cout << "-1,-2を入力するとヒントを得ることが出来ます" << endl;
	while (true) {
		cin >> inputValue;

		//正解かどうかの判定
		if (targetNumber == inputValue) {
			cout << "正解です" << endl;
			break;
		}
		else if (inputValue == -1 || inputValue== -2){
			//なにもしない、-1、-2のときに不正解と表示しないため
		}
		else{
			cout << "不正解です" << endl;
		}

		//-1の入力があったとき、偶数か奇数かのヒントを与える
		if (inputValue == -1) {
			if (targetNumber % 2 == 0) {
				cout << "目標の値は偶数です" << endl;
			}
			else {
				cout << "目標の値は奇数です" << endl;
			}
		}

		//-2の入力があったとき、5のあたりか、7より大きいか、3より小さいかのヒントを与える
		if (inputValue == -2) {
			if (targetNumber > 7) {
				cout << "目標の値は5よりも大きいです" << endl;
			}
			else if (3 <= targetNumber && targetNumber <= 7){
				cout << "目標の値は　5 ±2の範囲にあります" << endl;
			}
			else {
				cout << "目標の値は5より小さいです" << endl;
			}
		}
	}
}