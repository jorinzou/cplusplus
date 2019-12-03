#include <iostream>

using namespace std;

//后缀++,成员函数形式
class C
{
public:
	C(int data):m_data(data)
	{
	
	}
	
	const C operator++(int)
	{
		this->m_data++;
		return *this;
	}

	void print(void)
	{
		cout << m_data << endl;
	}
private:
	int m_data;
};

int main(void)
{
	C c1 = C(23);
	c1++;
	c1.print();
	return 0;
}
