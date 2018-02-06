#include "Complex.h"
#include <iostream>
using namespace std;


Complex::Complex(double x, double y)
{
	a = x;														//实部
	b = y;														//虚部
}


Complex::~Complex()
{
}

void Complex::show()
{
	cout << a;
	if (b != 0)													//虚部不为0时显示虚部
		cout << "+" << b << "i" << endl;
}

void Complex::add(Complex x)
{
	a += x.a;
	b += x.b;
}