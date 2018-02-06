#include <iostream>
#include "Rectangle.h"
using namespace std;
int main()
{
	int a, b, c, d;
	cout << "请输入左上角横坐标x：";
	cin >> a;
	cout << "请输入左上角纵坐标y：";
	cin >> b; 
	cout << "请输入右下角横坐标x：";
	cin >> c; 
	cout << "请输入右下角纵坐标y：";
	cin >> d;
	Rectangle R(a, b, c, d);									//调用构造函数生成矩形
	cout << "矩形面积为：" << R.getArea() << endl;				//计算面积并输出
	system("pause");
	return 0;
}