#include<iostream>
using namespace std;
int F_to_C(int f);
int main()
{
	int c, f;																//����cΪ���϶ȣ�fΪ���϶�
	cout << "�����뻪�϶�F��";												//���뻪�϶�
	cin >> f;
		cout << "ת��Ϊ���϶�Ϊ��" << F_to_C(f) << "���϶�" << endl;			//���
	system("pause");
	return 0;
}

int F_to_C(int f)
{
	int c;
	c = (f - 32) * 5 / 9;													//ת������
	return c;
}