// Laba4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;


void table(double i, double F) {
	cout << i << "     |     " << F << endl;
}


int main()
{
	setlocale(LC_ALL, "Rus");
	double a, b, c, x_n, x_e, d_x;
	cout << "Введите значения a,b,c" << endl;
	cin >> a >> b >> c;
	cout << "Введите x нач. и x конеч." << endl;
	cin >> x_n >> x_e;
	cout << "Введите шаг dx" << endl;
	cin >> d_x;

	cout << "|     x     |     F     |" << endl;
	for (double i = x_n; i <= x_e; i += d_x) {
		double F = 0;
		if ((i - 1 < 0) && (b - i != 0)) {
			F = a * i * i + b;
			table(i, F);
		}
		else {
			if ((i - 1 > 0) && (b + i == 0)) {
				F = (i - a) / i;
				table(i, F);
			}
			else {
				F = i / c;
				table(i, F);
			}
		}
	}
	
	return 0;
}

