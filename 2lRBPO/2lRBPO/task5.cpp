#include <iostream>
#include <math.h>
using namespace std;
double x;
double result;
void f();
void main()
{
	setlocale(LC_ALL, "Russian");
	cout.precision(4);
	x = 7;
	f();
	cout << "Çàäàííûé x = " << x << "; " << endl;
	cout << "Çíà÷åíèå ôóíêöèè ïðè çàäàííîì  x: f = " << result << "; " << endl;
	cout << "Ââåäèòå õ:";
	cin >> x;
	f();
	cout << "Çíà÷åíèå ôóíêöèè ïðè ââåä¸ííîì x: f = " << result << "; " << endl;
}
void f()
{
	result = (5 - 2 * x * x) / ((1 + x + x * x) / (2 * x + x * x) + 2 - (1 - x - x * x) / (2 * x - x * x));
}

