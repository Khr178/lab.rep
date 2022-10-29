// Lab_04.6.cpp
// < Копейка Христина >
// Лабораторна робота № 4.6
// Вкладені цикли
// Варіант 8

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double S;
	int k, n;

	S = 1;
	k = 1;
	while (k <= 10)
	{
		S = 0;
		n = 1;
		while (n <= k)
		{
			S += (sin * k * n);
			n++;
		}
		S *= (S / k);
		k++;
	}
	cout << S << endl;

	S = 1;
	k = 1;
	do {
		S = 0;
		n = 1;
		do {
			S += (sin * k * n);
			n++;
		} while (n <= k);
		S *= (S / k);
		k++;
	} while (k <= 10);
	cout << S << endl;

	S = 1;
	for (k = 1; k <= 10; k++)
	{
		S = 0;
		for (n = 1; n <= k; n++)
		{
			S += (sin * k * n);
        }
		S *= (S / k);
	}
	cout << S << endl;

	S = 1;
	for (k = 10; k >= 1; k--)
	{
		S = 0;
		for (n = k; n >= 1; n--)
		{
			S += (sin * k * n);
        }
		S *= (S / k);
	}
	cout << S << endl;

	return 0;
}