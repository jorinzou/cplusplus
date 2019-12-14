#include <cstring>
#include <iostream>
using namespace std;

// 通用版本
template<typename T>
T max (T x, T y) 
{
	return x < y ? y : x;
}

// 特殊版本
char const* max (char const* x,char const* y)
{
	return strcmp (x, y) < 0 ? y : x;
}

// 通用版本
template<typename T>
class Comparator 
{
public:
	Comparator (T x, T y) :m_x (x), m_y (y)
	{}
	
	T max (void) const 
	{
		return m_x < m_y ? m_y : m_x;
	}
private:
	T m_x, m_y;
};

// 成员特化
template<>
char const* Comparator<char const*>::max (void)const
{
	return strcmp (m_x, m_y) < 0 ?m_y : m_x;
}


// 针对char const*类型的特(例)化版本
// 全类(模板)特化
template<>
class Comparator<char const*> 
{
public:
	Comparator (char const* x,char const* y) :m_x (x), m_y (y)
	 {}	
		
	char const* max (void) const 
	{
		return strcmp (m_x, m_y) < 0 ?m_y : m_x;
	}
private:
	char const* m_x, *m_y;
};


int main (void) {
	int a = 123, b = 456;
	cout << ::max (a, b) << endl;
	char const* c = "456", *d = "123";
	cout << ::max (c, d) << endl;
	/*
	cout << ::max (string (c),
		string (d)) << endl;
	cout << ::max<string> (c, d) << endl;
	*/
	Comparator<int> ci (a, b);
	cout << ci.max () << endl;
	Comparator<char const*> cp (c, d);
	cout << cp.max () << endl;
	return 0;
}
