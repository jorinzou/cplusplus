#include <iostream>

using namespace std;

template <typename T>
class Array
{
public:
	void push(T data)
	{
		cout << "array元素进栈" << endl;
	}

	T pop(T data)
	{
		cout << "array元素出栈" << endl;
		return data;
	}
};

template <typename T>
class List
{
public:
	void pop(T data)
	{
		cout << "list 元素入栈" << endl;
	}

	T push(T data)
	{
		cout << "list元素出栈" << endl;
		return data;
	}
};

template <typename T,template <typename>class C=Array>
class A
{
public:
	A()
	{
	}

	void pop(T data)
	{
		m_a.pop(data);
	}

	void push(T data)
	{
		m_a.push(data);
	}

	C<T>m_a;
};

int main(void)
{
	A<int>a;
	a.pop(123);
	a.push(123);

	A<int,List>a1;
	a1.pop(12);
	a1.push(12);
	return 0;
}
