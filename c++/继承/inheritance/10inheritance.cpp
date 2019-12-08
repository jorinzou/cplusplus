#include <iostream>

using namespace std;

//析构顺序
//子类析构函数
//子类成员对象，按照声明的逆序析构

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


class D
{
public:
	~D()
	{
		cout << "~D" << endl;
	}

	A a;
	B b;
	C c;
};

int main(void)
{
	D *d = new D();
	delete d;
	return 0;
}

