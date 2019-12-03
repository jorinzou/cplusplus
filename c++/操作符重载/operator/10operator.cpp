#include <iostream>

using namespace std;

//后缀++,全局函数形式
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
	int m_data;
};

//后缀++，全局函数形式
const C &operator++(C &c,int)
{
	c.m_data++;
	return c;
}

int main(void)
{
	C c1 = C(23);
	c1++;
	c1.print();
	return 0;
}
