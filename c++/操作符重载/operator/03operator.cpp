#include <iostream>

using namespace std;

//-操作符重载,全局形式
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

	int i;
	int j;
};

//外部函数没有const属性
const C operator-(const C &c1,const C &c2)/*const error*/
{
	return C(c1.i - c2.i, c1.j - c2.j);
}

int main(void)
{
	C c1 = C(3,3);
	C c2 = C(1,1);

	C c3 = c1 - c2;
	c3.print();

	return 0;
}
