// Lab_03_3.cpp
// < Копейка Христина >
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції
// Варіант 8

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x; // вхідний аргумент
	double R; // вхідний параметр
	double y; // результат обчислення виразу

	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	// розгалуження в повній формі
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
	cout << endl;
	cout << "y = " << y << endl;

	cin.get();
	return 0;
}


	
	
	

	
	
