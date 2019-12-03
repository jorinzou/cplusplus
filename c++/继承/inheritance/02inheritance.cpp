#include <iostream>

using namespace std;

//向上造型
//基类类型的指针或者引用，指向或者引用子类型,缩小了访问范围，这样是安全的

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
	//向上造型
	A *a = new C(123,678);
	a->eat();
	//a->print(); error 指针范围内，只能访问基类成员

	return 0;
}
