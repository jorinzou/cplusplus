#include <iostream>

using namespace std;

//虚拟继承的原理，查看内存布局
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
};

class C:virtual public A
{
public:
	C(int data):A(data)
	{
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
	cout << sizeof(A) << endl;
	cout << sizeof(B) << endl;
	cout << sizeof(C) << endl;
	cout << sizeof(D) << endl;
	return 0;
}


