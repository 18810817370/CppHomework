#pragma once
#include <string>
using namespace std;
class person														//person�����ݳ�Ա�����������Ա��������Ӧ�ĺ���
{
	string name;
	bool gender;
	int age;
public:
	person();
	person(string, bool, int);
	~person();
	void Input(person &);											//���뺯�����޸ģ�
	void show();													//��ʾ
};

class Student:public person											//ѧ���࣬���м̳�person��
{
public:
	Student();
	~Student();
	void Input(Student &);											//����
	void show();													//��ʾ
private:
	string ID, Class;												//���ѧ�źͰ༶
};

class Teacher:public person											//��ʦ�࣬���м̳�person��
{
public:
	Teacher();
	~Teacher();
	void Input(Teacher &);											//����
	void show();													//��ʾ
private:
	string Subject, Title;											//���רҵ��ְ��
};

