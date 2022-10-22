// Lab_04_1.cpp
// < Копейка Христина >
// Лабораторна робота № 4.1
// Цикли
// Варіант 8

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int k, N, i;
	double P;

	cout << "k = "; cin >> k;
	cout << "N = "; cin >> N;

	P = 0;
	i = k;
	while (i <= N)
	{
		P += (k / i + i / N);
		i++;
    }
	cout << P << endl;
	P = 0;
	i = k;
	do {
		P += (k / i + i / N);
		i++;
	   } while (i <= N);
	   cout << P << endl;

	   P = 0;
	   for (i = k; i <= N; i++)
	   {
		   P += (k / i + i / N);
	   }
	   cout << P << endl;

	   P = 0;
	   for (i = N; i >= k; i--)
	   {
		   P += (k / i + i / N);
	   }
	   cout << P << endl;

	   return 0;
}



