#include <iostream>

using namespace std;

int main(void)
{
	int a = 90;
	const int &p = a;
	cout << "a:" << a << endl;
	
	//int c = 100;
	//p = c;
	
	const int &b = 12;
	cout << "b:" << b << endl;
	return 0;
}
