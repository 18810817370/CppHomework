#include<iostream>
using namespace std;
void prime(int a,int b);												//定义prime函数
int main()
{
	int a;																//a为要判断额数
	cout << "请输入一个整数：";											//输入啊
	cin >> a;
	while (a<1)															//输入错误的情况	
	{
		cout << "输入错误,请重新输入" << endl;
		cin >> a;
	} 																					
	prime(a, 2);														//调用prime函数递归判断
	system("pause");
	return 0;
}

void prime(int a,int b)												//堆栈溢出
{
	if(a>b)
	{
		if (a%b == 0)													//能被小于本身的数整除
		{
			cout << "不是质数" << endl;
			return;
		}
		else															//递归
			prime(a, b++);
	}
	else
		cout << "是质数" << endl;										//b==a,所以是质数		
}

/*void prime(int a, int b)
{
	while (b<a)
	{
		if (a%b == 0)													//能被小于本身的数整除
			cout << "不是质数" << endl;
		b++;
	}
	cout << "是质数" << endl;											////b==a,所以是质数	
}*/