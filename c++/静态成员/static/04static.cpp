#include <iostream>

using namespace std;

//静态成员函数，受到访问控制符控制
class A
{
public:
	A(int data):m_data(data)
	{
	
	}
private:
	static void get_data(void)
	{
		cout << "static func" << endl;
	}

	int m_data;
};


int main(void)
{
	A a = A(123);
	//a.get_data(); error
	//A::get_data(); error
	return 0;
}
