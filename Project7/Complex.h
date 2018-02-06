#pragma once
class Complex																//¸´ÊýÀà
{
private:
	double a, b;
public:
	Complex(double x = 0, double y = 0);
	~Complex();
	void show();
	void add(Complex x);
};

