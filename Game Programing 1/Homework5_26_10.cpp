#include <iostream>
using namespace std;


int inputValue = 0;
int outputValue = 0;

int loopDispNumber() {
	cout << "入力と入力値の出力を何回繰り返しますか？" << endl;
	cin >> inputValue;
	for (int i = 0; i < inputValue; ++i) {
		cout << "出力したい値を入力してください" << endl;
		cin >> outputValue;
		if (outputValue == -1) {
			return -1;
		}
	}
	return 0;
}


int main() {
	int recieveValue = 0;
	recieveValue = loopDispNumber();

	if (recieveValue == -1) {
		cout << "途中で終了しました" << endl;
	}else if (recieveValue == 0) {
		cout << "最後まで表示しました " << endl;
	}
}

