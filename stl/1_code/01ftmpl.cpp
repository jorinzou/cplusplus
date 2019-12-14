#include <iostream>

using namespace std;

//函数模板使用

template<typename T>
T sum(T x,T y)
{
	return x+y;
}

int main(void)
{

	int a = sum(2,3);
	cout << a << endl;
	return 0;
}
