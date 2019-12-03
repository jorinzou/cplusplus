#include <iostream>

using namespace std;

//()操作符重载
class C
{
public:
	C(int data):m_data(data)
	{
	
	}

	void print(void)
	{
		cout << m_data << endl;
	}
	
	int operator()(int a)const
	{
		return a*a;
	}

private:
	int m_data;
};

int main(void)
{
	C c1 = C(2);
	cout << c1(100) << endl;
	return 0;
}
