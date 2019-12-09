#include <iostream>

using namespace std;

//动态类型转换

class A
{
public:
	A()
	{
	
	}
	virtual void func(void)=0;
};

class B:public A
{
public:
	B()
	{
	
	}
	virtual void func(void)
	{
		cout << "B func"  << endl;
	}
};

class C:public A
{
public:
	C()
	{
	
	}
	virtual void func(void)
	{
		cout << "C func"  << endl;
	}
};

int main(void)
{
	B *b = new B();
	A *p = b;
	C *c = static_cast<C*>(p);//转换能成功，但是不安全

	c = dynamic_cast<C*>(p);
	cout << c << endl;//空指针,转换失败

	A &ra = *b;
	C &rc = dynamic_cast<C&>(ra);//throw bad_cast

	return 0;
}
