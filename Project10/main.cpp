#include "CShape.h"
#include <iostream>
using namespace std;
int main()
{
	CCircle O;													//����Բ�����O
	CRectangle R;												//������ζ���R
	O.input();													//����Բ�İ뾶��ɫ��Ϣ
	O.show();													//��ʾ
	R.input();													//�������Ͻ����곤�����ɫ��Ϣ
	R.show();													//��ʾ
	system("pause");
	return 0;
}