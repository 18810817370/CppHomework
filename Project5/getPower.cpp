#include<iostream>
using namespace std;
int getPower(int x, int y);															// ������ʽ����y<0ʱ����0
double getPower(double x, double y);												//ʵ����ʽ��main������ʵ�����롢�����
int main()
{
	int x, y;
	double a, b;
	cout << "������x(int)��";														//��������x
	cin >> x;
	cout << "������y(int)��";														//��������y
	cin >> y;
	cout << "���Ϊ��" << getPower(x, y) << endl;									//���ú������㣬�����
	system("pause");
	cout << "������a(double)��";														//����˫������a
	cin >> a;
	cout << "������b(int)��";														//��������b�����������λ
	cin >> b;
	cout << "���Ϊ��" << getPower(a, b) << endl;									//���ú��������
	system("pause");
	return 0;
}

int getPower(int x, int y)															//ʵ��x^y����
{
	int t = x;
	for (int i = 1; i < y; i++)														//��ͨ���
		x *= t;
	if (y == 0 && x != 0)															//ָ��Ϊ0ʱ
		return 1;
	if (x == 0)																		//��Ϊ0ʱ
		return 0;
	return x;
}

double getPower(double x, double y)													//ʵ�֣�double��x^y����
{
	double t = x;
	for (int i = 1; i < y; i++)														//��ͨ���
		x *= t;
	if (y == 0 && x != 0)															//����Ϊ0ʱ
		return 1;
	if (x == 0)																		//��Ϊ0ʱ
		return 0;
	return x;																		
}