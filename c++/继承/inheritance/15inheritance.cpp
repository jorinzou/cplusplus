#include <iostream>

using namespace std;

//钻石继承,多个中间子类继承来自于同一个基类，在汇聚子类中，存在多个实例，汇聚子类访问基类成员时，会因路径不同而导致结果不同
class A
{
public:
	A(int data):a_data(data)
	{
	
	}

protected:
	int a_data;
};

class B:public A
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

class C:public A
{
public:
	C(int data):A(data)
	{
	
	}
	void set(int a)
	{
		cout << A::a_data << endl;
		A::a_data = a;
	}
};

class D:public B,public C
{
public:
	D(int data1,int data2):B(data1),C(data2)
	{
	
	}
};

int main(void)
{	
	D d = D(11,22);
	cout << d.get() << endl;//11
	d.set(33);
	cout << d.get() << endl;//11,值没有改变

	return 0;
}


