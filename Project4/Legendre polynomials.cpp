#include<iostream>
using namespace std;
double Legendre_polynomials(double x, int n);
int main()
{
	int n;
	double x;
	cout << "������x��ֵ��";															//����x
	cin >> x;
	cout << "������n��ֵ��";															//����n
	cin >> n;
	while (n < 0)																	//�������
	{
		cout << "�����������������n��";
		cin >> n;
	}
	cout<<"���Ϊ"<<Legendre_polynomials(x, n)<<endl;								//����double Legendre_polynomials(double x, int n)���㣬�����
	system("pause");
	return 0;
}


double Legendre_polynomials(double x, int n)										//���õݹ�д����
{
	if (n == 0)
		return 1;
	else if (n == 1)
		return x;
	else 
		return ((2 * n - 1)*x*Legendre_polynomials(x, n - 1) - (n - 1)*Legendre_polynomials(x, n - 2)) / n;
}