#include <iostream>

using namespace std;

//-操作符重载,成员函数形式
class C
{
public:
	C(int a,int b):i(a),j(b)
	{
	
	}
	
	void print(void)
	{
		cout  << i << endl;
		cout  << j << endl;
	}

	const C operator-(const C &c)const
	{
		return C(i-c.i,j-c.j);
	}

	int i;
	int j;
};

int main(void)
{
	C c1 = C(3,3);
	C c2 = C(1,1);

	C c3 = c1 - c2;//c1.operator()-c2;
	c3.print();

	return 0;
}
