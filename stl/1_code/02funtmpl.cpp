#include <iostream>
#include <typeinfo>

using namespace std;

//隐式推断
template <typename T>
T sum(T x,T y)
{
	return x+y;
}

int main(void)
{
	/*显式*/
	cout << sum<int>(2,3) << endl;
	cout << sum<double>(2.3,3.4) << endl;
	cout << sum<string>("hello","world") << endl;

	/*隐式*/
	cout << sum(3,4) << endl;
	cout << sum(3.2,4.5) << endl;
	return 0;
}
