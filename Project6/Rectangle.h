#pragma once

class coordinate																//�����ࣨx��y��
{
public:
	int X, Y;
};


class Rectangle
{
private:
	coordinate L, R;															//���Ϻ���������
	int length, width;															//����
public:
	Rectangle(int a = 0, int b = 0, int c = 0, int d = 0);
	~Rectangle();
	int getArea();
};

