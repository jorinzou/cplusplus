#include <iostream>
#include <typeinfo>

using namespace std;

//template关键字 解决模板嵌套问题
template <typename X>
class A
{
	public:

	//类模板嵌套
	template <typename Y>
	class B
	{
		public:
			Y y;
	};

	//函数模板嵌套
	template <typename Z>
	Z foo(Z z)
	{
		return z;
	}

	X x;
};

template <typename T>
void fun(void)
{
	A<int> a,*p;
	p = &a;
 	cout << typeid(p->template/*加上一个template关键字*/ foo<char>(1)).name() << endl;;
}

int main(void)
{
	A<int> a,*p;
	p = &a;

	cout << typeid(p->template foo<int>(2)).name() << endl;

	A<int>::B<double>b;
  cout << typeid(b.y).name() << endl;	

	fun<double>();
	return 0;
}
