#include "Rectangle.h"

Rectangle::Rectangle(int a, int b, int c, int d)
{
	L.X = a;												//L��ʾ���Ͻ�
	L.Y = b;
	R.X = c;												//R��ʾ���½�
	R.Y = d;
	length = c - a;
	width = d - b;
}


Rectangle::~Rectangle()
{
}

int Rectangle::getArea()
{
	return length*width;
}