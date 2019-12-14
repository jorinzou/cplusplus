#include <iostream>
#include <typeinfo>
using namespace std;

template<typename A>
class X 
{
public:
	// 嵌套于类模板中的函数模板
	template<typename B>
	void foo (void) const 
	{
		B var;
		cout << typeid (m_var).name ()<< ' '<< typeid (var).name ()<< endl;
	}
	// 嵌套于类模板中的类模板
	template<typename C>
	class Y 
	{
		public:
			C m_var;
	};
private:
	A m_var;
};

template<typename T>
void bar (void) 
{
	X<T> x, *p = &x;
	x.template foo<double> (); // i d
	p->template foo<double> (); // i d
	typename X<T>::template Y<double> y;
	cout << typeid (y.m_var).name ()<< endl;	
}

int main (void) 
{
	X<int> x;
	x.foo<double> (); // i d
	bar<int> ();
	return 0;
}
