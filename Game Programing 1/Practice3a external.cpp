#include <iostream>
using namespace std;

double Triangle_area(double bottom, double height);
double Circle_area(double radius);
double Trapezoid_area(double upper_bottom, double lower_bottom, double height);

int main() {
	cout << Triangle_area(3.0, 2.0) << endl;
	cout << Circle_area(2.0) << endl;
	cout << Trapezoid_area(2, 3, 5) << endl;
	
}