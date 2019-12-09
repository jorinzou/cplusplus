#include <iostream>

using namespace std;

//虚析构函数

class A
{
public:
	A()
	{
	
	}

	virtual ~A()
	{
		cout << "~A" << endl;
	}
};

class B:public A
{
public:
	B()
	{
	
	}

	~B()
	{
		cout << "~B" << endl;	
	}
};

int main(void)
{
	B *b = new B();
	A *ab = b;
	delete ab;
	return 0;
}
