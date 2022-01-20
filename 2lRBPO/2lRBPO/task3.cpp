#include <iostream>
#include <math.h>
using namespace std;
double f(double x);
void main()
{
	setlocale(LC_ALL, "ru");
	double x;
	cout.precision(4);
	x = 7;
	cout << "Заданный x = " << x << "; " << endl;
	cout << "Значение функции при заданном x: f = " << f(x) << "; " << endl;
	cout << "Введите х:";
	cin >> x;
	cout << "Значение функции при введённом x: f = " << f(x) << "; " << endl;
}
double f(double x)
{
	double f;
	f = (5 - 2 * x * x) / ((1 + x + x * x) / (2 * x + x * x) + 2 - (1 - x - x * x) / (2 * x - x * x));
	return f;
}
