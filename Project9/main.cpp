#include "person.h"
#include <iostream>
using namespace std;
int main()
{
	person p;													//≤‚ ‘person¿‡
	p.Input(p);
	p.show();
	Student S;													//≤‚ ‘Students¿‡
	S.Input(S);
	S.show();
	Teacher T;													//≤‚ ‘Teacher¿‡
	T.Input(T);
	T.show();
	system("pause");
	return 0;
}