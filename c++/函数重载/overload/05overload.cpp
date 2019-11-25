/*ÑÆÔªº¯Êý*/

#include <iostream>

using namespace std;

int func(int a = 90)
{
	cout << "a=" << a << endl;
    return 0;
}

int main(void)
{
	func(34);
	return 0;
}
