// Lab_04_4.cpp
// < Копейка Христина >
// Лабораторна робота № 4.4
// Табуляція функції, заданої графіком
// Варіант 8

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()

{
	double x, xp, xk, dx, R, y;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;

	x = xp;
	while (x <= xk)
	{
		if (x <= -8)
			y = 2;
		else
			if (-8 < x && x <= 0)
				y = 1. / 4. * x;
			else
				if (0 < x && x <= 2);
		y = 2 - sqrt(2 * 2 - x * x);


		if (2 < x && x <= 8)
			y = sqrt(2 * 2 - (x - 2) * (x - 2));
		else
			y = -(x - 8) / (6 - 8);

		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;

	return 0;
}



