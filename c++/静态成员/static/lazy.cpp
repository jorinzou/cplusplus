#include <iostream>

using namespace std;

//懒汉式，用的时候创建，不用的时候销毁

class A
{
public:
	static A *get_s_object(void)
	{
		if (s_instance == NULL){
			s_instance = new A(8989);	
			return s_instance;
		}
	}

	void release(void)
	{
		if (s_instance != NULL){
			delete s_instance;
			s_instance = NULL;
		}
	}

	void print(void)
	{
		cout << m_data << endl;
	}

private:
	A(int data):m_data(data)
	{
	
	}
	
	int m_data;
	static A *s_instance;
};

A * A::s_instance = NULL;

int main(void)
{
	A *a = A::get_s_object();
	a->print();
	a->release();

	return 0;
}
