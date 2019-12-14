#include <iostream>
#include <typeinfo>

using namespace std;

//函数模板重载

template <typename T>
T sum(T x,T y)
{
	return x+y;
}

template <typename T>
T sum(T x,T y,T z)
{
	return x+y+z;
}

int main(void)
{
	cout << sum(1,2) << endl;
	cout << sum(1,2,3) << endl;
	return 0;
}
