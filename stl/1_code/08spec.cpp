#include <iostream>
#include <cstring>

using namespace std;

//全类特化
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

//全类特化
template <>
class A<const char*>
{
	public:
	A(const char *x,const char *y):m_x(x),m_y(y)
	{
		cout << "A<const char*>" << endl;	
	}

	const char *max(void)const
	{
		return strcmp(m_x,m_y)>0?m_x:m_y;
	}

	const char *m_x;
	const char *m_y;
};


int main(void)
{
	const char *a = "abc";
	const char *b = "def";
	A<const char*> p(a,b);

	cout << p.max() << endl;

	return 0;
}
