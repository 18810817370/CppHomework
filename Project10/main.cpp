#include "CShape.h"
#include <iostream>
using namespace std;
int main()
{
	CCircle O;													//定义圆类对象O
	CRectangle R;												//定义矩形对象R
	O.input();													//输入圆心半径颜色信息
	O.show();													//显示
	R.input();													//输入左上角坐标长宽和颜色信息
	R.show();													//显示
	system("pause");
	return 0;
}