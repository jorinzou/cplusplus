#include <iostream>
using namespace std;

template<typename A>
class X 
{
public:
	virtual void foo (A arg) const 
	{
		cout << "X::foo" << endl;
	}
};

template<typename A, typename B>
class Y : public X<A> 
{
public:
	void foo (A arg) const 
	{
		cout << "Y::foo" << endl;
	}
};

template<typename A, typename B>
class Z : public X<B> 
{
public:
	void foo (A arg) const 
	{
		cout << "Z::foo" << endl;
	}
};

class V 
{
public:
	template<typename T>
	virtual void foo (void) 
	{}
};


int main (void) 
{
	Y<int, double> y;
	X<int>& x1 = y;
	x1.foo (0);
	Z<int, double> z;
	X<double>& x2 = z;
	x2.foo (0.);
	return 0;
}













