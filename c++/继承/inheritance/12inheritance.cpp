#include <iostream>

using namespace std;

//子类没有提供拷贝构造，子类进行拷贝构造时，调用缺省的拷贝构造，该函数自动调用缺省的基类的拷贝构造函数初始化子对象
class A
{
public:
	~A()
	{
		cout << "~A" << endl;
	}

	A &operator=(A &that)
	{
			if (this != &that){
				m_data = that.m_data;
			}
			cout << "copy A" << endl;
			return *this;
	}

	int m_data;
};

class B:public A
{
public:
	~B()
	{
		cout << "~B" << endl;
	}
};

int main(void)
{
	B b = B();
	B b1 = b;

	return 0;
}

