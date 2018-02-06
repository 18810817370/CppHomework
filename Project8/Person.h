#pragma once
#include <iostream>
using namespace std;

class Date																		//日期类
{
public:
	int day, month, year;
};


class Person
{
private:
	bool Gender;																//性别男为0,女为1
	long Code, ID;																//编号和身份证
	Date birthday;																//出生日期
public:
	Person(long code = 0, bool gender = 0, long id = 0, int day = 0, int month = 0, int year = 0);		//构造函数,无输入是初始化为0(默认形参为0)
	~Person();																	//析构函数
	Person(Person &P);															//拷贝构造函数
	void Input(Person &P);														//输入储存在引用P中
	void Show()																	//输出（内联）
	{
		cout << "编号：" << Code << endl;
		cout << "性别：";
		if (Gender)
			cout << "女" << endl;
		else
			cout << "男" << endl;
		cout << "出生日期（月/日/年）：" << birthday.month << "/" << birthday.day << "/" << birthday.year << endl;
		cout << "身份证号码：" << ID << endl;
	};
};