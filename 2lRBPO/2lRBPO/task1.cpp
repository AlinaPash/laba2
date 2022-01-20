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
	cout << "Заданный x = " << x << "; " << endl;
	cout << "Значение функции при заданном x: f = " << f << "; " << endl;

	cout << "Введите х:";
	cin >> x;
	f = (5 - 2 * x * x) / ((1 + x + x * x) / (2 * x + x * x) + 2 - (1 - x - x * x) / (2 * x - x * x));
	cout << "Значение функции при введённом x: f = " << f << "; " << endl;
}