#include <iostream>

using namespace std;

//静态成员函数，没有this和const属性
class A
{
public:
	A(int data):m_data(data)
	{
	
	}

	static void get_data(void)/*const error*/
	{
		cout << "static func" << endl;
		//this->m_data = 123; error
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
