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
	cout << "�������ţ�";
	cin >> P.Code;
	cout << "�Ա�Male == 0/Female == 1����";
	cin >> P.Gender;
	cout << "���֤���룺";
	cin >> P.ID;
	cout << "���������գ��꣩��";
	cin >> P.birthday.year;
	cout << "���������գ��£���";
	cin >> P.birthday.month;
	cout << "���������գ��գ���";
	cin >> P.birthday.day;
}

/*void Person::Show()
{
	cout << "��ţ�" << Code << endl;
	cout << "�Ա�";
	if (Gender)
		cout << "Ů" << endl;
	else
		cout << "��" << endl;
	cout << "�������ڣ���/��/�꣩��" << birthday.month << "/" << birthday.day << "/" << birthday.year << endl;
	cout << "���֤���룺" << ID << endl;
}*/