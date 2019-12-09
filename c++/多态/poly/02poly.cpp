#include <iostream>

using namespace std;

//纯虚函数

class A
{
public:
	A()
	{
	
	}
	virtual void func(void) = 0;//纯虚函数
};

class B:public A
{
public:
	B()
	{
	
	}

	void func(void)
	{
		cout << "B func" << endl;
	}
};

class C:public A
{
public:
	C()
	{
	
	}

	void func(void)
	{
		cout << "C func" << endl;
	}
};

int main(void)
{
	B b = B();
	C c = C();

	A *ab = &b;
	A *ac = &c;

	ab->func();
	ac->func();
	return 0;
}
