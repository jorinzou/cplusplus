/*根据参数顺序不同重载*/

#include <iostream>

using namespace std;

int func(double a,int b)
{
	cout << "a=" << a<< endl;
	cout << "b=" << b<< endl;
    return 0;
}

int func(int b,double a)
{
	cout << "b=" << b << endl;
	cout << "a=" << a << endl;
	return 0;
}

int main(void)
{
	func(1.123,23);
	func(45,1.123);
	return 0;
}
