#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	char a[10];
	char b[5] = "123";
	strcpy(a ,b);

	cout << a << endl;;


	char c[20] = "Hello";
	char d[] = " World";
	strcat(c, d);
	cout << c << endl;

	char e[] = "Hello";
	char f[] = "world";
	int ret = 0;
	ret = strcmp(e, f);

	if (ret == 0) {
		cout << "文字列は等しいです。" << endl;
	}
	else if (ret != 0) {
		cout << "文字列は等しくないです" << endl;
	}
}