// Lab_04_3.cpp
// < Копейка Христина >
// Лабораторна робота № 4.3
// Табуляція функції, заданої формулою: функція з параметрами
// Варіант 8

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double a, c, x, xp, xk, dx, F;

	cout << "a = "; cin >> a;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "a" << " |"
		<< setw(7) << "c" << " |" << endl;
	   cout << "|" << setw(5) << "x" << " |"
    cout << "---------------------------" << endl;
		
	

	x = xp;
	while (x <= xk)
	{
		if (c < 0 && a != 0)
			F = -(a * x * x);
		if (c > 0 && a == 0)
			F = (a - x) / (c * x);
		if (!(c < 0 && a != 0) && !(c > 0 && a == 0))
			F = x / c;

		cout << "|" << setw(7) << setprecision(2) << a
			<< " |" << setw(10) << setprecision(3) << c
			<< " |" << setw(10) << setprecision(3) << x
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}
