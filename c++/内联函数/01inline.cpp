#include <iostream>

using namespace std;

inline int func(int &a)
{
	a++;
	return 0;
}

int main(void)
{
	int b = 123;
	int &p = b;
	func(p);
	return 0;
}
