#include <iostream>

using namespace std;

//-单目操作符重载,成员形式
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

	//成员形式
	const C operator-()
	{
		return C(-this->m_data);
	}

private:
	int m_data;
};


int main(void)
{
	C c1 = C(1);
	C c2 = -c1;
	c2.print();
	return 0;
}
