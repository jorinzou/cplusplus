#include <iostream>

using namespace std;

//类型转换操作符重载 
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

	operator int()const
	{
		return m_data;
	}

private:
	int m_data;
};

int main(void)
{
	C c1 = C(2);

	int i = 890;
	i = c1;
	cout << i << endl; 
	return 0;
}
