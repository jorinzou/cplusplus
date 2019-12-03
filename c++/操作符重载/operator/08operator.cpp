#include <iostream>

using namespace std;

//前缀++,全局函数形式
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

//全局成员函数形式前++
C &operator++(C &c)
{
	++c.m_data;
	return c;
}


int main(void)
{
	C c1 = C(23);
	++c1;
	c1.print();
	return 0;
}
