#include <iostream>

using namespace std;

//静态成员函数，可以被类访问，也可以被对象访问
class A
{
public:
	A(int data):m_data(data)
	{
	
	}

	static void get_data(void)
	{
		cout << "static func" << endl;
	}

private:
	int m_data;
};


int main(void)
{
	A a = A(123);
	a.get_data();
	A::get_data();
	return 0;
}
