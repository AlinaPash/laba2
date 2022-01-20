#pragma once
#include <iostream>
//#include <math.h>
extern double x;
extern double result;

namespace Pashkovskya
	{
	static void f()
	{
		result = (5 - 2 * x * x) / ((1 + x + x * x) / (2 * x + x * x) + 2 - (1 - x - x * x) / (2 * x - x * x));
	}
}
