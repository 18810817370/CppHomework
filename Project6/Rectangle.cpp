#include "Rectangle.h"

Rectangle::Rectangle(int a, int b, int c, int d)
{
	L.X = a;												//L表示左上角
	L.Y = b;
	R.X = c;												//R表示右下角
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