#include <iostream>
using namespace std;

int f(int x, int y) {
	return 2 * x + y;
}
int function(int x, int y) {
	return x + y;
}
int rectangleArea(int x, int y) {
	return x * y;
}
double circleArea(int radius) {
	return radius * radius * 3.14;
}
int main() {
	cout << "f(1, 2) = " << f(1, 2) << endl;
	cout << "f(182, 144) = " << f(182, 144) << endl;
	cout << "funtion(32767,65536) = " << function(32767, 65536) << endl;
	cout << "rectangleArea(32767,65536) = " << rectangleArea(32767, 65536) << endl;
	double a = 0;
	a = circleArea(64);
	cout << "circleArea(64) = " << a << endl;
}