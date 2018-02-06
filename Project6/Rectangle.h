#pragma once

class coordinate																//坐标类（x，y）
{
public:
	int X, Y;
};


class Rectangle
{
private:
	coordinate L, R;															//左上和右下坐标
	int length, width;															//长宽
public:
	Rectangle(int a = 0, int b = 0, int c = 0, int d = 0);
	~Rectangle();
	int getArea();
};

