#include <iostream>

using namespace std;

//私有继承与保护继承，不能做向上造型，子类的指针或者引用，不能转换成基类的指针或者引用

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

class C : protected A
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
	//A *a = new C(12,56); error

	return 0;
}
