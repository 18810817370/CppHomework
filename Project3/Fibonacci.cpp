#include<iostream>
#include<Windows.h>
using namespace std;
int Fibonacci(int c);
int fibonacci(int c);
int main()
{
	int a;																		//��aλFibonacci����
	DWORD t1, t2, t3, t4;
	cout << "������Fibonacci�����ڼ��";
	cin >> a;
	while (a < 1)																//��Чλ����������
	{
		cout << "����������������룺";
			cin >> a;
	}
	t1 = timeGetTime();
	cout << "��" << a << "����" << Fibonacci(a) << endl;							//�õݹ�ó����
	t2 = timeGetTime();
	cout << "����" << (t2 - t1)*1.0 / 1000 << "s" << endl;
	system("pause");
	t3 = timeGetTime();
	cout << "��" << a << "����" << fibonacci(a) << endl;							//��ѭ���ó����
	t4 = timeGetTime();
	cout << "����" << (t4 - t3)*1.0 / 1000 << "s" << endl;
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
	int a(1), b(1), t;															//t,b��ǰ���c<3ʱ������ѭ�������Ϊb��ʼֵ1
	for (int i = 2; i < c; i++)
	{
		t = a;
		a = b;
		b = t + b;
	}
	return b;
}