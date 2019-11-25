/*根据参数类型不同重载*/

#include <iostream>

using namespace std;

int func(double a)
{
	cout << "a=" << a<< endl;
    return 0;
}

int func(int a)
{
	cout << "a=" << a << endl;
	return 0;
}

int main(void)
{
	func(1);
	func(1.123);
	return 0;
}
