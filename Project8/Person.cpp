#include "Person.h"



Person::Person(long code, bool gender, long id, int day, int month, int year)
{
	Code = code;
	Gender = gender;
	ID = id;
	birthday.day = day;
	birthday.month = month;
	birthday.year = year;
}


Person::~Person()
{
}

Person::Person(Person &P)
{
	Code = P.Code;
	Gender = P.Gender;
	ID = P.ID;
	birthday.day = P.birthday.day;
	birthday.month = P.birthday.month;
	birthday.year = P.birthday.year;
}

void Person::Input(Person &P)
{
	cout << "请输入编号：";
	cin >> P.Code;
	cout << "性别（Male == 0/Female == 1）：";
	cin >> P.Gender;
	cout << "身份证号码：";
	cin >> P.ID;
	cout << "请输入生日（年）：";
	cin >> P.birthday.year;
	cout << "请输入生日（月）：";
	cin >> P.birthday.month;
	cout << "请输入生日（日）：";
	cin >> P.birthday.day;
}

/*void Person::Show()
{
	cout << "编号：" << Code << endl;
	cout << "性别：";
	if (Gender)
		cout << "女" << endl;
	else
		cout << "男" << endl;
	cout << "出生日期（月/日/年）：" << birthday.month << "/" << birthday.day << "/" << birthday.year << endl;
	cout << "身份证号码：" << ID << endl;
}*/