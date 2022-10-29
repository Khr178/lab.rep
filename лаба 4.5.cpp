// Lab_04.5.cpp
// < Копейка Христина >
// Лабораторна робота № 4.5
// "Попадання" у плоску фігуру
// Варіант 8

#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	int R;

	srand((unsigned)time(NULL));

	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		cout << "R = "; cin >> R;

		// розгалуження в повній формі
        if ((y <= b + R && y >= (a - x) + b && x <= a) ||
			(y >= b - R && y <= (x - a) + b && x <= a) ||
			((x - a) * (x - a) + (y - b) * (y - b) <= R * R && x >= a))
			cout << "yes" << end1;
		else
			cout << "no" << end1;
    }
	cin.get();
	cout << end1 << fixed;

	cout << "R = "; cin >> R;
	for (int i = 0; i < 10; i++)
    {
		x = (-R) * rand() / (R - (-R) + 1);
		y = (-R) * rand() / (R - (-R) + 1);
		

		if ((y <= b + R && y >= (a - x) + b && x <= a) ||
			(y >= b - R && y <= (x - a) + b && x <= a) ||
			((x - a) * (x - a) + (y - b) * (y - b) <= R * R && x >= a))
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "yes" << end1;
		else
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "no" << end1;
    }
	return 0;
}