#include <iostream>
using namespace std;

int main() {
	char name[] = "human academy";
	cout << sizeof name / sizeof name[0];
}