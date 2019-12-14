#include <iostream>

using namespace std;

//模板的非类型实参
template <int x>
int fun(void)
{
	return x*x;
}

int main(void)
{
	cout << fun<8>() << endl;
	return 0;
}
