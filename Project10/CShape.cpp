#include "CShape.h"
#include <iostream>
using namespace std;


#define PI 3.1415926

CShape::CShape()
{
}


CShape::~CShape()
{
}

CShape::CShape(string c)
{
	color = c;
}

void CShape::input()
{
	cout << "请输入颜色：";
	cin >> color;
}

void CShape::show()
{
	cout << "颜色：" << color << endl;
}

CRectangle::CRectangle()
{
	L.X = 0;
	L.Y = 0;
	lenth = 0;
	width = 0;
}

CRectangle::CRectangle(double x, double y, double l, double w)
{
	L.X = x;
	L.Y = y;
	lenth = l;
	width = w;
}

CRectangle::~CRectangle()
{
}

void CRectangle::input()
{
	cout << "请输入矩形左上角坐标x：";
	cin >> L.X;
	cout << "请输入矩形左上角坐标y：";
	cin >> L.Y;
	cout << "请输入长：";
	cin >> lenth;
	cout << "请输入宽：";
	cin >> width;
	CShape::input();
}

double CRectangle::area()
{
	return lenth*width;
}

double CRectangle::perimeter()
{
	return 2 * (lenth + width);
}

void CRectangle::show()
{
	cout << "矩形左上角坐标为：(" << L.X << "," << L.Y << ")" << endl;
	cout << "长：" << lenth << endl;
	cout << "宽：" << width << endl;
	cout << "面积：" << area() << endl;
	cout << "周长：" << perimeter() << endl;
	CShape::show();
}

CCircle::CCircle()
{
	O.X = 0;
	O.Y = 0;
	radius = 0;
}

CCircle::~CCircle()
{
}

CCircle::CCircle(double x, double y, double r)
{
	O.X = x;
	O.Y = y;
	radius = r;
}

void CCircle::input() 
{
	cout << "请输入圆心坐标x：";
	cin >> O.X;
	cout << "请输入圆心坐标y：";
	cin >> O.Y;
	cout << "请输入半径：";
	cin >> radius;
	CShape::input();
}

double CCircle::area()
{
	return radius * PI;
}

double CCircle::perimeter()
{
	return 2 * radius * PI;
}

void CCircle::show()
{
	cout << "圆心坐标(" << O.X << "," << O.Y << ")" << endl;
	cout << "半径：" << radius << endl;
	cout << "面积：" << area() << endl;
	cout << "周长：" << perimeter() << endl;
	CShape::show();
}