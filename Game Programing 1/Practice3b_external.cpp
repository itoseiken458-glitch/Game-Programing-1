const double pi = 3.141592;

double Triangle_area(double bottom, double height) {
	return bottom * height / 2;
}

double Circle_area(double radius) {
	return radius* radius* pi;
}

double Trapezoid_area(double upper_bottom,double lower_bottom,double height) {
	return (upper_bottom + lower_bottom) * height / 2;
}
//test