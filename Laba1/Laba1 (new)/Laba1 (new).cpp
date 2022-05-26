
#include <iostream>
using namespace std;

double funcz1(double a, double b) {
	return (sin(a) + cos(2 * b - a)) / (cos(a) - sin(2 * b - a));
}

double funcz2(double a, double b) {
	return (1 + sin(2 * b)) / cos(2 * b);
}

int main()
{
	double a, b;
	cin >> a >> b;
	double rad_a = 3.14 / 180 * a;
	double rad_b = 3.14 / 180 * b;
	if (cos(rad_a) - sin(2 * rad_b - rad_a) != 0) {
		double z1 = funcz1(rad_a, rad_b);
		cout << "z1 = " << z1 << endl;
	}
	else
		cout << "Warning! The denominator is zero in z1" << endl;
	if (cos(2 * rad_b) != 0) {
		double z2 = funcz2(rad_a, rad_b);
		cout << "z2 = " << z2 << endl;
	}
	else
		cout << "Warning! Warning! The denominator is zero in z2";
	return 0;
}
