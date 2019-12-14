#include <iostream>

using namespace std;

//函数模板缺省
template <typename A = int>
A fun(A a,A b)
{
	return a>b?a:b;
}

//类模板缺省
template <typename A=int,typename B=A>
class C
{
	public:
	C(A x,B y):a(x),b(y)
	{
	
	}
	
	const A max(void)const
	{
		return a>b?a:b;
	}

	A a;
	B b;
};

int main(void)
{
	cout << fun(3,4) << endl;;

	C<> c = C<>(12,16);
	cout << c.max() << endl;;
	return 0;
}
