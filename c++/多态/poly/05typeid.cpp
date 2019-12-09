#include <iostream>
#include <typeinfo>

using namespace std;

//typeid

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
	B b = B();
	cout << typeid(b).name() << endl;
	int a = 2;
	double d = 3.14;
	cout << typeid(a).name() << endl;
	cout << typeid(d).name() << endl;
	return 0;
}
