#include <iostream>

using namespace std;

//抽象类,这里的基类成员函数全部为纯虚函数，所以也是纯抽象类

class A
{
public:
	A()
	{
	
	}
	virtual void func(void) = 0;
	virtual void show(void) = 0;
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

	void show(void)
	{
		cout << "B show" << endl;
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

	void show(void)
	{
		cout << "C show" << endl;
	}
};

int main(void)
{
	B b = B();
	C c = C();

	A *ab = &b;
	A *ac = &c;

	ab->func();
	ab->show();
	ac->func();
	ac->show();
	return 0;
}
