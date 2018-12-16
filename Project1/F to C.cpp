#include<iostream>
using namespace std;
int F_to_C(int f);
int main()
{
	int c, f;																//定义c为摄氏度，f为华氏度
	cout << "请输入华氏度F：";												//输入华氏度
	cin >> f;
		cout << "转换为摄氏度为：" << F_to_C(f) << "摄氏度" << endl;			//输出
	system("pause");
	return 0;
}

int F_to_C(int f)
{
	int c;
	c = (f - 32) * 5 / 9;													//转换运算
	return c;
}