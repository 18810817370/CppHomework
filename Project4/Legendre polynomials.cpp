#include<iostream>
using namespace std;
double Legendre_polynomials(double x, int n);
int main()
{
	int n;
	double x;
	cout << "请输入x的值：";															//输入x
	cin >> x;
	cout << "请输入n的值：";															//输入n
	cin >> n;
	while (n < 0)																	//输入错误
	{
		cout << "输入错误，请重新输入n：";
		cin >> n;
	}
	cout<<"结果为"<<Legendre_polynomials(x, n)<<endl;								//调用double Legendre_polynomials(double x, int n)计算，并输出
	system("pause");
	return 0;
}


double Legendre_polynomials(double x, int n)										//利用递归写函数
{
	if (n == 0)
		return 1;
	else if (n == 1)
		return x;
	else 
		return ((2 * n - 1)*x*Legendre_polynomials(x, n - 1) - (n - 1)*Legendre_polynomials(x, n - 2)) / n;
}