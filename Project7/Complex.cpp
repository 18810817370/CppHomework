#include "Complex.h"
#include <iostream>
using namespace std;


Complex::Complex(double x, double y)
{
	a = x;														//ʵ��
	b = y;														//�鲿
}


Complex::~Complex()
{
}

void Complex::show()
{
	cout << a;
	if (b != 0)													//�鲿��Ϊ0ʱ��ʾ�鲿
		cout << "+" << b << "i" << endl;
}

void Complex::add(Complex x)
{
	a += x.a;
	b += x.b;
}