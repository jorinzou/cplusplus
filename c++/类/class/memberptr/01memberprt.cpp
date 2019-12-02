#include <iostream>

using namespace std;

//函数成员指针 
//变成成员指针 
class A
{
public:
	A(int data):m_data(data)
	{
	
	}

	void show(void)
	{
			cout << m_data << endl;
	}

	int m_data;
};

int main(void)
{
	A a = A(123);

	int *p = &a.m_data;
	cout << *p << endl;

	void (A::*p_fun)(void) = &A::show;
  (a.*p_fun)();
	return 0;
}
