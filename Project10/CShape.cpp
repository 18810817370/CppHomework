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
	cout << "��������ɫ��";
	cin >> color;
}

void CShape::show()
{
	cout << "��ɫ��" << color << endl;
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
	cout << "������������Ͻ�����x��";
	cin >> L.X;
	cout << "������������Ͻ�����y��";
	cin >> L.Y;
	cout << "�����볤��";
	cin >> lenth;
	cout << "�������";
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
	cout << "�������Ͻ�����Ϊ��(" << L.X << "," << L.Y << ")" << endl;
	cout << "����" << lenth << endl;
	cout << "��" << width << endl;
	cout << "�����" << area() << endl;
	cout << "�ܳ���" << perimeter() << endl;
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
	cout << "������Բ������x��";
	cin >> O.X;
	cout << "������Բ������y��";
	cin >> O.Y;
	cout << "������뾶��";
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
	cout << "Բ������(" << O.X << "," << O.Y << ")" << endl;
	cout << "�뾶��" << radius << endl;
	cout << "�����" << area() << endl;
	cout << "�ܳ���" << perimeter() << endl;
	CShape::show();
}