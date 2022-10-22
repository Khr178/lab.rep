// Lab_03_4.cpp
// < Копейка Христина >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою
// Варіант 8

#include <iostream>

using namespace std;

int main()
{
	double x;
	double y;
	double R;
	double a;
	double b;

	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;

	if ((y <= b + R && y >= (a - x) + b && x <= a) ||
		(y >= b - R && y <= (x - a) + b && x <= a) ||
		((x - a) * (x - a) + (y - b) * (y - b) <= R * R && x >= a))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}