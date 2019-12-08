#include <iostream>

using namespace std;

//delete基类指针，基类指针指向子对象，只会调用基类析构函数，子类析构函数没有调用，造成内存泄露
class A
{
public:
	~A()
	{
		cout << "~A" << endl;
	}
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
	A *a = new B();
	delete a;
	return 0;
}

