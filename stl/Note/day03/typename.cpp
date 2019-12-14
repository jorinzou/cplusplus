#include <iostream>
using namespace std;

class A 
{
public:
	typedef unsigned int uint;
	class B {};
};

template<typename T>
class C 
{
public:
	class D {};
};

template<typename T>
void foo (void) 
{
	typename T::uint u;
	typename T::B b;
	typename C<T>::D d;
}

int main (void) 
{
	A::uint u;
	A::B b;
	foo<A> (); // A->T
	return 0;
}
