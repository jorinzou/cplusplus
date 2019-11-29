#include <iostream>

using namespace std;

extern "C"{
int func(int a,double b);
}

int func(int a,double b)
{
	return a;
}

int main(void)
{
	func(2,4.56);
	return 0;
}
