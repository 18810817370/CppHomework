#include<iostream>
using namespace std;
void prime(int a,int b);												//����prime����
int main()
{
	int a;																//aΪҪ�ж϶���
	cout << "������һ��������";											//���밡
	cin >> a;
	while (a<1)															//�����������	
	{
		cout << "�������,����������" << endl;
		cin >> a;
	} 																					
	prime(a, 2);														//����prime�����ݹ��ж�
	system("pause");
	return 0;
}

void prime(int a,int b)												//��ջ���
{
	if(a>b)
	{
		if (a%b == 0)													//�ܱ�С�ڱ����������
		{
			cout << "��������" << endl;
			return;
		}
		else															//�ݹ�
			prime(a, b++);
	}
	else
		cout << "������" << endl;										//b==a,����������		
}

/*void prime(int a, int b)
{
	while (b<a)
	{
		if (a%b == 0)													//�ܱ�С�ڱ����������
			cout << "��������" << endl;
		b++;
	}
	cout << "������" << endl;											////b==a,����������	
}*/