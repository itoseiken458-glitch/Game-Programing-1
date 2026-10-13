#include <iostream>
using namespace std;

int main() {
	const char a[] = "0123456789";
	int len = strlen(a);
	cout << len <<"  " << sizeof a << endl;
}