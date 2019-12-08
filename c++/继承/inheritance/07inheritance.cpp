#include <iostream>

using namespace std;

//子类没有显示指明基类的初始化列表方式，会直接调用基类的无参构造函数初始化基类子对象

class A
{
public:
	A():m_data(0)
	{
		cout << "A1" << endl;	
	}

	A(int data):m_data(data)
	{
		cout << "A2" << endl;	
	}

	int m_data;
};

class B:public A
{
public:
		B():data(123)
		{
			cout << "B1" << endl;
		}

		B(int i):A(i)
		{
			cout << "B2" << endl;
			data = i;	
		}
	int data;
};

int main(void)
{
	//B b = B(897);	
	B b1 = B();	
	return 0;
}
