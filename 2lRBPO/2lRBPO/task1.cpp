#include <iostream>
#include <math.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Russian");
	double f, x;
	x = 7;
	f = (5 - 2 * x * x) / ((1 + x + x * x) / (2 * x + x * x) + 2 - (1 - x - x * x) / (2 * x - x * x));
	cout.precision(4);
	cout << "�������� x = " << x << "; " << endl;
	cout << "�������� ������� ��� �������� x: f = " << f << "; " << endl;

	cout << "������� �:";
	cin >> x;
	f = (5 - 2 * x * x) / ((1 + x + x * x) / (2 * x + x * x) + 2 - (1 - x - x * x) / (2 * x - x * x));
	cout << "�������� ������� ��� �������� x: f = " << f << "; " << endl;
}