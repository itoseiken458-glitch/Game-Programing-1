#include <iostream>
using namespace std;



int sum = 0;
int score[5];
int average = 0;
//グローバル変数にしたら、引数は不要
//scoreは一つの関数でしか使わないから、そこの関数のローカル変数として扱えばよい
//Show(Calc)なら、averageを使わなくても良くなる
//グローバル変数は使用禁止
//多くの人が使うから、何が入ってるかわからなくなるから
void InputArray(int array[]) {
	for (int i = 0; i < 5; ++i) {
		cout << i + 1 << "個目の値を入力してください >" << endl;
		cin >> array[i];
	}
}

void Calc(int array[]) {
	for (int i = 0; i < 5; ++i) {
		sum += array[i];
	}
	average = sum / 5.0;
}

void Show(int average) {
	cout << average << endl;
}


int main() {
	InputArray(score);
	Calc(score);
	Show(average);
}