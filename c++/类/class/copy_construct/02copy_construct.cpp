#include <iostream>
#include <string>

using namespace std;

class A
{
public:
	A()
	{
	
	}

	A(const A &a)
	{
		m_s = a.m_s;
	}
	string m_s;
};

int main(void)
{
	//自定义拷贝构造函数
	A a = A();
	a.m_s = "test";
	A a1(a);
	cout << a1.m_s << endl;
	return 0;
}
