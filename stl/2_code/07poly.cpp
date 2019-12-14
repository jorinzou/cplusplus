#include <iostream>

using namespace std;

//模板中的多态使用

template <typename T>
class A
{
public:
	A()
	{
	}

	virtual void fun(void)
	{
		cout << "A fun" << a_var <<endl;
	}

	T a_var;
};

template <typename X,typename Y>
class B:public A<Y>
{
public:
	void fun(void)
	{
		cout << "B fun"<< b_var << endl;
	}

	X b_var;
};

template <typename X,typename Y>
class C :public A<Y>
{
public:
	C()
	{
	}

	void fun(void)
	{
		cout << "C fun" << c_var << endl;
	}

	X c_var;
};

int main(void)
{
	A<double> a,*p;
	B<double,double>b;
	p = &b;
	p->fun();

	C<double,double>c;
	p = &c;
	p->fun();


	return 0;
}
