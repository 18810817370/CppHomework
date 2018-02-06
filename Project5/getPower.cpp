#include<iostream>
using namespace std;
int getPower(int x, int y);															// 整型形式，当y<0时返回0
double getPower(double x, double y);												//实型形式在main函数中实现输入、输出。
int main()
{
	int x, y;
	double a, b;
	cout << "请输入x(int)：";														//输入整数x
	cin >> x;
	cout << "请输入y(int)：";														//输入整数y
	cin >> y;
	cout << "结果为：" << getPower(x, y) << endl;									//调用函数计算，并输出
	system("pause");
	cout << "请输入a(double)：";														//输入双浮点数a
	cin >> a;
	cout << "请输入b(int)：";														//输入整数b，浮点数会进位
	cin >> b;
	cout << "结果为：" << getPower(a, b) << endl;									//调用函数并输出
	system("pause");
	return 0;
}

int getPower(int x, int y)															//实现x^y运算
{
	int t = x;
	for (int i = 1; i < y; i++)														//普通情况
		x *= t;
	if (y == 0 && x != 0)															//指数为0时
		return 1;
	if (x == 0)																		//底为0时
		return 0;
	return x;
}

double getPower(double x, double y)													//实现（double）x^y运算
{
	double t = x;
	for (int i = 1; i < y; i++)														//普通情况
		x *= t;
	if (y == 0 && x != 0)															//质数为0时
		return 1;
	if (x == 0)																		//底为0时
		return 0;
	return x;																		
}