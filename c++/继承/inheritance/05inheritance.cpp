#include <iostream>

using namespace std;

//子类不可以访问基类中的的私有成员，但是可以通过基类的成员访问基类的私有成员

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
		cout << a_data << endl;//基类的私有成员
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
		sleep();//子类通过基类的成员，访问基类的私有成员
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
  c->print(); 

	return 0;
}
