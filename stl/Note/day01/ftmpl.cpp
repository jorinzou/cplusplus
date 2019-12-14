#include <iostream>
using namespace std;
// 函数模板
template<typename T>
T max (T x, T y) 
{
	return x < y ? y : x;
}
int main (void) 
{
	int a = 123, b = 456;
//	cout << ::max<int> (a, b) << endl;
	cout << ::max (a, b) << endl;
	double c = 1.3, d = 4.6;
//	cout << ::max<double> (c, d) << endl;
	cout << ::max (c, d) << endl;
	string e = "hello", f = "world";
//	cout << ::max<string> (e, f) << endl;
	cout << ::max (e, f) << endl;
	char g[] = "hello", h[] = "world";
	cout << ::max<string> (g, h) << endl;
//	cout << ::max (g, h) << endl;
	return 0;
}
