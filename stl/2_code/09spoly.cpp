#include <iostream>

using namespace std;

class A
{
public:
	virtual void fun(void)const=0;
};

class B:public A
{
public:
	void fun(void)const
	{
		cout << "B fun" << endl;
	}
};

class C:public A
{
public:
	void fun(void)const
	{
		cout << "C fun" << endl;
	}
};

void foo(A const &a)
{
	a.fun();
}

int main(void)
{
	foo(C());
	foo(B());
	return 0;
}
