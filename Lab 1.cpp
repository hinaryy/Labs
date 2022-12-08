#include <iostream>
#include "windows.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double a = 0, x = -15.246, y = 4.642 * pow(10, -2), z = 20.001 * pow(10, 2);

	cout << "Введите значения аргументов x, y, z >> ";
	cin >> x >> y >> z;

	if (!cin.fail())
	{
		a = log(pow(y, -sqrt(abs(x)))) * (x - y / 2.0) + pow(sin(atan(z)), 2);
		cout << a << endl;
	}
	else if (y < 0)
	{
		cout << "y не может быть меньше нуля" << endl;
		return 0;
	}
	else
	{
		cout << "Введены некорректные значения" << endl;
		return 0;
	}
}
