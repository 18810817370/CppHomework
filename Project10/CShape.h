#pragma once
#include <string>
using namespace std;

class CShape														//只包含颜色的CShape类
{
	string color;
public:
	CShape();
	CShape(string);
	~CShape();
	void input();
	void show();
};

class coordinate													//定义坐标类（X为横坐标，Y为纵坐标）
{
public:
	double X, Y;
};


class CRectangle:public CShape										//矩形类公有继承图形类
{
public:
	CRectangle();
	CRectangle(double, double, double, double);
	~CRectangle();
	void input();
	double area();													//计算面积
	double perimeter();												//计算周长
	void show();
private:															//包含左上角坐标和长宽
	coordinate L;
	double lenth, width;
};

class CCircle:public CShape											//圆类公有继承图形类
{
public:
	CCircle();
	~CCircle();
	CCircle(double, double, double);
	void input();
	double area();													//计算面积
	double perimeter();												//计算周长
	void show();
private:
	coordinate O;													//圆心坐标
	double radius;													//半径
};

