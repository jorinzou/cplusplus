#include <iostream>

using namespace std;

template <typename T>
T foo(void)
{
	//零初始化
	T var = T();
	return var;
}

template <typename T>
class A
{
public:
	A():m_var()
	{
	}
	T m_var;
};

int main(void)
{
	cout << foo<int>() << endl;

	A<int> a;
	cout << a.m_var << endl;
	return 0;
}
