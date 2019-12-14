#include <iostream>

using namespace std;

//函数模板
template <typename T>
T sum(T x,T y)
{
	return x+y;
}

int main(void)
{
	cout << sum<int>(2,3) << endl;
	cout << sum<double>(2.3,3.4) << endl;
	cout << sum<string>("hello","world") << endl;
	return 0;
}
