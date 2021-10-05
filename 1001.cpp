#include "stdafx.h"


// template 는 필요한 클래스 받아와서 


template <typename t1>
void getprint(t1 a)
{
	cout << a << endl;
}

template <class t2>
void printclass(t2 a)
{
	cout << a.a << endl;
	cout << a.geta() << endl;
}

template <class t3>
t3 returnclass(t3 a, t3 b)
{
	return t3(a.geta() + b.geta());
}


class testclass
{
public:
	int a;
	testclass(int i) { this->a = i; };
	int geta() { return a; };
};

//class 
int main()
{
	testclass result = returnclass(testclass(10), testclass(20));




	printclass(result);
	return 0;
}