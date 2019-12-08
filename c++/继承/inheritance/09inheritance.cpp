#include <iostream>

using namespace std;

//析构顺序
//子类析构函数
//基类对象，按照继承逆序

class A
{
public:
	~A()
	{
		cout << "~A" << endl;
	}
};

class B
{
public:
	~B()
	{
		cout << "~B" << endl;
	}
};

class C
{
public:
	~C()
	{
		cout << "~C" << endl;
	}
};


class D:public A,public B,public C
{
public:
	~D()
	{
		cout << "~D" << endl;
	}
};

int main(void)
{
	D *d = new D();
	delete d;
	return 0;
}

