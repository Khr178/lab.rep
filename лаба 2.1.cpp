// Lab_02.cpp
// < Копейка Христина >
// Лабораторна робота № 2.1
// Лінійні програми.
// Варіант 8
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    double x;  // вхідний параметр
    double y;  // вхідний параметр
    double z1; // результат обчислення 1-го виразу
    double z2; // результат обчислення 2-го виразу
    


    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;

    z1 = pow(cos(x),4) + pow(sin(y),2) + ((1. / 4) * pow(sin(2*x),2))-1;
    z2 = sin(y + x) * sin(y - x);

    cout << endl;
    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;

    cin.get();
    return 0;

}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
