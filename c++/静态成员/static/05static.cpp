#include <iostream>

using namespace std;

//静态成员函数,只能访问静态成员，非静态成员函数，可以访问静态，也可以访问非静态
class A
{
public:
	A(int data):m_data(data)
	{
	
	}
	
	static void get_data(void)
	{
		cout << "static func" << endl;
		cout << num << endl;
		//cout << m_data << endl; error
	}

	void show(void)
	{
		cout << m_data << endl;
		cout << this->num << endl;
		cout << A::num << endl;
		cout << num << endl;
	}
private:
	int m_data;
	static int num;
};

int A::num = 1234;

int main(void)
{
	A a = A(123);
	A::get_data();
	a.show();
	return 0;
}
