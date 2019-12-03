#include <iostream>

using namespace std;

//单目操作符重载,全局函数形式
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

//全局函数形式
const C operator-(C &c)
{
	return C(-c.m_data);
}

int main(void)
{
	C c1 = C(13);
	C c2 = -c1;
	c2.print();
	return 0;
}
