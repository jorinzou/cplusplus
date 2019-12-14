#include <iostream>
#include <cstring>

using namespace std;

//成员特化
template <typename T>
class A
{
	public:
	A(T x,T y):m_x(x),m_y(y)
	{
	}

	T max(void)const
	{
		return m_x > m_y?m_x:m_y;
	}

	T m_x;
	T m_y;
};

//成员特化
template <>
const char *A<char const*>::max(void)const
{
	return strcmp(m_x,m_y)>0?m_x:m_y;
}

int main(void)
{
	const char *a = "abc";
	const char *b = "def";
	A<const char*>c(a,b);
	cout << c.max() << endl;

	return 0;
}
