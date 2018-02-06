#pragma once
#include <string>
using namespace std;
class person														//person类数据成员包括姓名、性别、年龄和相应的函数
{
	string name;
	bool gender;
	int age;
public:
	person();
	person(string, bool, int);
	~person();
	void Input(person &);											//输入函数（修改）
	void show();													//显示
};

class Student:public person											//学生类，公有继承person类
{
public:
	Student();
	~Student();
	void Input(Student &);											//输入
	void show();													//显示
private:
	string ID, Class;												//添加学号和班级
};

class Teacher:public person											//教师类，公有继承person类
{
public:
	Teacher();
	~Teacher();
	void Input(Teacher &);											//输入
	void show();													//显示
private:
	string Subject, Title;											//添加专业，职称
};

