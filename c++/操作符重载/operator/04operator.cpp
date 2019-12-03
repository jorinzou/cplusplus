#include <iostream>

using namespace std;

//+=操作符重载,全局形式与成员形式i
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

	#if 0
	//成员形式
	C &operator+=(const C &c)
	{
		this->m_data+= c.m_data;
		return *this;
	}
	#endif

//private:
	int m_data;
};

//全局形式
C &operator+=(C &c1,const C &c2)
{
	c1.m_data += c2.m_data;
	return c1;
}

int main(void)
{
	C c1 = C(8);
	c1.print();
	C c2 = C(8);
	c1 += c2;
	c1.print();

	return 0;
}
