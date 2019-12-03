#include <iostream>

using namespace std;

//子类可以访问基类的中的公有成员和保护成员

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

	void print(void)
	{
		cout << c_data << endl;
		//cout << a_data << endl; error，不能访问基类的私有成员
		sleep();//内部可以访问保护成员
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
	C *c = new C(12,34);
	c->eat();
	c->print();
	//c->sleep();,外部不能访问保护成员

	return 0;
}
