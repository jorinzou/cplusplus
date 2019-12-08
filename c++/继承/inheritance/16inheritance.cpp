#include <iostream>

using namespace std;

//钻石继承的解决办法 
class A
{
public:
	A(int data):a_data(data)
	{
	
	}

protected:
	int a_data;
};

class B:virtual public A
{
public:
	B(int data):A(data)
	{
	
	}
	
 int get(void)
 {
 		return A::a_data;
 }
};

class C:virtual public A
{
public:
	C(int data):A(data)
	{
	
	}
	void set(int a)
	{
		A::a_data = a;
	}
};

class D:public B,public C
{
public:
	D(int data):B(data),C(data),A(data)
	{
	
	}
};

int main(void)
{	
	D d = D(11);
	cout << d.get() << endl;//11
	d.set(22);
	cout << d.get() << endl;//22

	return 0;
}


