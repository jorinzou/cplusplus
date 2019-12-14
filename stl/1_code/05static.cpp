#include <iostream>

using namespace std;

//静态成员变量,在各个对象之间共享,地址唯一

template <typename T>
class A
{
public:
	A()
	{
	}

	void get_ptr(void)
	{
		cout << &m_var << endl;
		cout << &s_var << endl;
	}

	int m_var;
	static int s_var;
};

template <typename T>
int A<T>::s_var;

int main(void)
{
	A<int> a;
	A<int> b;

	a.get_ptr();
	b.get_ptr();
	return 0;
}

