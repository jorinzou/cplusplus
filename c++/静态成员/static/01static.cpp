#include <iostream>

using namespace std;

//静态成员变量的定义声明以及初始化
class A
{
public:
	A()
	{
	
	}

	void show(void)
	{
		cout << A::m_data << endl;
	}

	static int m_data;	
};

int A::m_data = 123;

int main(void)
{
	A a = A();
	cout << a.m_data << endl;
	cout << A::m_data << endl;
	a.show();
	return 0;
}
