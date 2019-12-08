#include <iostream>

using namespace std;

//子类定义拷贝构造函数，但是没有指明基类子对象的初始化方式，将以无参的方式初始化基类子对象
class A
{
public:
	A(int data):a_data(data)
	{
	}

	A(const A &that)
	{
	
	}
	int a_data;
};

class B:public A
{
public:
	B(int data1,int data2):b_data(data1),A(data2)
	{
	}

	B(const B &that)
	{
		if (this != &that){
			b_data = that.b_data;
		}
		cout << "copy constror B" << endl;
	}

	int b_data;
};

int main(void)
{
	B b = B(111,222);
	cout << b.a_data << endl;
	cout << b.b_data << endl;
	B b1 = b;
	cout << b1.a_data << endl;
	cout << b1.b_data << endl;
	return 0;
}

