#pragma once
#include <string>
using namespace std;

class CShape														//ֻ������ɫ��CShape��
{
	string color;
public:
	CShape();
	CShape(string);
	~CShape();
	void input();
	void show();
};

class coordinate													//���������ࣨXΪ�����꣬YΪ�����꣩
{
public:
	double X, Y;
};


class CRectangle:public CShape										//�����๫�м̳�ͼ����
{
public:
	CRectangle();
	CRectangle(double, double, double, double);
	~CRectangle();
	void input();
	double area();													//�������
	double perimeter();												//�����ܳ�
	void show();
private:															//�������Ͻ�����ͳ���
	coordinate L;
	double lenth, width;
};

class CCircle:public CShape											//Բ�๫�м̳�ͼ����
{
public:
	CCircle();
	~CCircle();
	CCircle(double, double, double);
	void input();
	double area();													//�������
	double perimeter();												//�����ܳ�
	void show();
private:
	coordinate O;													//Բ������
	double radius;													//�뾶
};

