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
	cout << "������������";
	cin >> P.name;
	cout << "�Ա�Male == 0/Female == 1����";
	cin >> P.gender;
	cout << "���䣺";
	cin >> P.age;
}

void person::show()
{
	cout << "������" << name << endl;
	cout << "�Ա�";
	if (gender)
		cout << "Ů" << endl;
	else
		cout << "��" << endl;
	cout << "���䣺" << age << endl;
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
	cout << "ѧ����Ϣ����" << endl;
	person::Input(S);
	cout << "������ѧ�ţ�";
	cin >> S.ID;
	cout << "������༶��";
	cin >> S.Class;
}

void Student::show()
{
	person::show();
	cout << "ѧ�ţ�" << ID << endl;
	cout << "�༶��" << Class << endl;
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
	cout << "��ʦ��Ϣ����" << endl;
	person::Input(T);
	cout << "������רҵ��";
	cin >> T.Subject;
	cout << "������ְ�ƣ�";
	cin >> T.Title;
}

void Teacher::show()
{
	person::show();
	cout << "רҵ����" << Subject << endl;
	cout << "ְ�ƣ�" << Title << endl;
}