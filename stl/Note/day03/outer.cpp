#include <iostream>
using namespace std;

template<typename A>
class X 
{
public:
	template<typename B>
	class Y;
private:
	A m_a;
};

template<typename A>
	template<typename B>
class X<A>::Y 
{
public:
	template<typename C>
	void foo (void) const;
private:
	B m_b;
};

template<typename A>
	template<typename B>
		template<typename C>
void X<A>::Y<B>::foo (void) const 
{
	C c;
}

int main (void) 
{
	X<int>::Y<double> y;
	y.foo<string> ();
	return 0;
}
