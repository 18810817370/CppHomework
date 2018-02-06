#include "person.h"
#include <iostream>
using namespace std;


person::person()
{
	name = '\0';
	gender = 0;
	age = 0;
}


person::person(string Name,bool Gender,int Age)
{
	name = Name;
	gender = Gender;
	age = Age;
}


person::~person()
{
}


void person::Input(person &P)
{
	cout << "请输入姓名：";
	cin >> P.name;
	cout << "性别（Male == 0/Female == 1）：";
	cin >> P.gender;
	cout << "年龄：";
	cin >> P.age;
}

void person::show()
{
	cout << "姓名：" << name << endl;
	cout << "性别：";
	if (gender)
		cout << "女" << endl;
	else
		cout << "男" << endl;
	cout << "年龄：" << age << endl;
}


Student::Student()
{
	ID = '\0';
	Class = '\0';
}

Student::~Student()
{
}


void Student::Input(Student &S)
{
	cout << "学生信息输入" << endl;
	person::Input(S);
	cout << "请输入学号：";
	cin >> S.ID;
	cout << "请输入班级：";
	cin >> S.Class;
}

void Student::show()
{
	person::show();
	cout << "学号：" << ID << endl;
	cout << "班级：" << Class << endl;
}

Teacher::Teacher()
{
	Subject = '\0';
	Title = '\0';
}

Teacher::~Teacher()
{
}

void Teacher::Input(Teacher &T)
{
	cout << "教师信息输入" << endl;
	person::Input(T);
	cout << "请输入专业：";
	cin >> T.Subject;
	cout << "请输入职称：";
	cin >> T.Title;
}

void Teacher::show()
{
	person::show();
	cout << "专业：：" << Subject << endl;
	cout << "职称：" << Title << endl;
}