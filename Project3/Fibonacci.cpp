#include<iostream>
#include<Windows.h>
using namespace std;
int Fibonacci(int c);
int fibonacci(int c);
int main()
{
	int a;																		//第a位Fibonacci级数
	DWORD t1, t2, t3, t4;
	cout << "请输入Fibonacci级数第几项：";
	cin >> a;
	while (a < 1)																//无效位，重新输入
	{
		cout << "输入错误，请重新输入：";
			cin >> a;
	}
	t1 = timeGetTime();
	cout << "第" << a << "项是" << Fibonacci(a) << endl;							//用递归得出结果
	t2 = timeGetTime();
	cout << "用了" << (t2 - t1)*1.0 / 1000 << "s" << endl;
	system("pause");
	t3 = timeGetTime();
	cout << "第" << a << "项是" << fibonacci(a) << endl;							//用循环得出结果
	t4 = timeGetTime();
	cout << "用了" << (t4 - t3)*1.0 / 1000 << "s" << endl;
	system("pause");
	return 0;
}

int Fibonacci(int c)
{
	int a(1), b(1);																//Fn = Fn-1 + Fn-2 ( n > 2), F1 = F2 = 1
	if (c < 3)
		return 1;
	else
		return  Fibonacci(c - 1) + Fibonacci(c - 2);
}

int fibonacci(int c)
{
	int a(1), b(1), t;															//t,b是前两项，c<3时不进入循环结果都为b初始值1
	for (int i = 2; i < c; i++)
	{
		t = a;
		a = b;
		b = t + b;
	}
	return b;
}