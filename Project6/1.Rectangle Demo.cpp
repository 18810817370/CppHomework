#include <iostream>
#include "Rectangle.h"
using namespace std;
int main()
{
	int a, b, c, d;
	cout << "���������ϽǺ�����x��";
	cin >> a;
	cout << "���������Ͻ�������y��";
	cin >> b; 
	cout << "���������½Ǻ�����x��";
	cin >> c; 
	cout << "���������½�������y��";
	cin >> d;
	Rectangle R(a, b, c, d);									//���ù��캯�����ɾ���
	cout << "�������Ϊ��" << R.getArea() << endl;				//������������
	system("pause");
	return 0;
}