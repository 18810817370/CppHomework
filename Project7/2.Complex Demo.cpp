#include "Complex.h"
#include <iostream>
using namespace std;
int main()
{
	Complex c1(3, 5);     // �ø���3+5i��ʼ��c1
	Complex c2 = 4.5;	   // ��ʵ��4.5��ʼ��c2
	c1.add(c2);		   // ��c1��c2��ӽ��������c1��
	c1.show();		   // ��c1���
	system("pause");
	return 0;
}