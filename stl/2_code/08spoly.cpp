#include <iostream>

using namespace std;

class A
{
public:
	void fun(void)
	{
		cout << "A fun" << endl;
	}
};

class B
{
public:
	void fun(void)
	{
		cout << "B fun" << endl;
	}
};

template <typename T>
void foo(T t)
{
	t.fun();
}

int main(void)
{
	foo(A());
	foo(B());
	return 0;
}
