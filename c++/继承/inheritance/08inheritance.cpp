#include <iostream>

using namespace std;

//按照继承的顺序，执行基类构造函数

class A
{
public:
	A():a_data(65)
	{
		cout << "A1" << endl;	
	}
	int a_data;
};

class B
{
public:
		B():b_data(66)
		{
			cout << "B1" << endl;
		}
	int b_data;
};

class C:public A,public B
{
public:
	C():c_data(67)
	{
		cout << "C1" << endl;
	}
	int c_data;
};

class D
{
public:
	D()
	{
		cout << "D1" << endl;
	}

	A a;
	B b;
};

int main(void)
{
	//C c = C();按照继承的顺序,构造基类对象
	D d = D(); //按照声明的顺序构造子类子成员
	return 0;
}
