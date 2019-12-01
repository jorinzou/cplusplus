#include <iostream>
#include <string>

using namespace std;

class A
{
public:
	A()
	{
	
	}

	string m_s;
};

int main(void)
{
	A a = A();
	a.m_s = "12345";
	
	//调用缺省的拷贝构造
	A a1(a);
	cout << a1.m_s << endl;

	return 0;
}
