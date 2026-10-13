#include <iostream>
#include <ctime>
using namespace std;

void replacePoint50(int* parr) {
	for (int* p = parr; p != &parr[16]; ++p) {
		if (*p < 50) {
			*p = 50;
		}
	}
}

int main() {
	int pointArr[16];
	srand((unsigned int)time(NULL));
	for (int* p = pointArr; p != &pointArr[16]; ++p) {
		*p = rand() % 100 + 1;
	}

	replacePoint50(pointArr);

	for (int* p = pointArr; p != &pointArr[16]; ++p) {
		cout << *p << endl;
	}

}