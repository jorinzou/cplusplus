#include <iostream>

using namespace std;

//饿汉式，程序启动即创建对象 

class A
{
public:
	static A &get_instance(void)
	{
		return s_instance;
	}

	void print(void)
	{
		cout << m_data << endl;
	}
	
private:
	A(int data):m_data(data)
	{
	
	}

	int m_data;
	static A s_instance;
};

A A::s_instance(7897);

int main(void)
{
	A &a = A::get_instance();
	a.print();
	return 0;
}
