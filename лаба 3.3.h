// Lab_03_3.cpp
// < ������� �������� >
// ����������� ������ � 3.3
// ������������, ������ �������� �������
// ������ 8

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x; // ������� ��������
	double R; // ������� ��������
	double y; // ��������� ���������� ������

	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	// ������������ � ����� ����
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


	
	
	

	
	
