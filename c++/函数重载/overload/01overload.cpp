/*根据参数个数不同重载*/

#include <iostream>

using namespace std;

int func(int a,int b)
{
	cout << "a+b=" << a+ b << endl;
    return 0;
}

int func(int a)
{
	cout << "a=" << a << endl;
	return 0;
}

int main(void)
{
	func(1,2);
	func(1);
	return 0;
}
