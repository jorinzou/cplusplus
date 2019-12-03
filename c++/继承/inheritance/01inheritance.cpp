#include <iostream>

using namespace std;

//公有的继承,在子类中说明基类子对象的初始化方式 

class A
{
public:
	A(int data):a_data(data)
	{
		cout << "A" << endl;
	}

	~A()
	{
			cout << "~A" << endl;
	}
	
	void eat(void)
	{
		cout << "A" << a_data << endl;
	}

protected:
	void sleep(void)
	{
		cout << "A sleep" << endl;
	}

private:
	int a_data;
};

class C : public A
{
public:
	C(int data,int data2):A(data2),c_data(data)//在子类中，说明基类子对象的初始化方式 
	{
		cout << "C" << endl;
	}
	
	~C()
	{
		cout << "~C" << endl;
	}

protected:
	void who(void)
	{
		cout << "my name is C" << endl;
	}

private:
	int c_data;
};

int main(void)
{

	return 0;
}
