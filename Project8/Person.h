#pragma once
#include <iostream>
using namespace std;

class Date																		//������
{
public:
	int day, month, year;
};


class Person
{
private:
	bool Gender;																//�Ա���Ϊ0,ŮΪ1
	long Code, ID;																//��ź����֤
	Date birthday;																//��������
public:
	Person(long code = 0, bool gender = 0, long id = 0, int day = 0, int month = 0, int year = 0);		//���캯��,�������ǳ�ʼ��Ϊ0(Ĭ���β�Ϊ0)
	~Person();																	//��������
	Person(Person &P);															//�������캯��
	void Input(Person &P);														//���봢��������P��
	void Show()																	//�����������
	{
		cout << "��ţ�" << Code << endl;
		cout << "�Ա�";
		if (Gender)
			cout << "Ů" << endl;
		else
			cout << "��" << endl;
		cout << "�������ڣ���/��/�꣩��" << birthday.month << "/" << birthday.day << "/" << birthday.year << endl;
		cout << "���֤���룺" << ID << endl;
	};
};