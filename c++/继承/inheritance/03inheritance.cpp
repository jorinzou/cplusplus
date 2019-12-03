#include <iostream>

using namespace std;

//向下造型
//子类类型的指针或者引用，引用了或者指向基类类型,这样扩大了范围，编译认为是不安全,需做显示式类型转换

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
	//向下造型
	A *a = new A(789);
	//做显示类型转换，不做编译出错
	C *c = static_cast<C*>(a);
	c->print();

	return 0;
}
