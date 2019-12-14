#include <cstring>
#include <iostream>
using namespace std;

template<typename T = int, size_t S = 3>
class Array 
{
public:
	T& operator[] (size_t i) 
	{
		return m_array[i];
	}
	
	T const& operator[] (size_t i) const
	{
		return const_cast<Array&>(*this)[i];
	}
	
	friend ostream& operator<<(Array<T, S> const& a) 
	{
		size_t size = sizeof(a.m_array)/sizeof(a.m_array[0]);
		for (size_t i = 0; i < size; ++i)
			os << '('<< a[i] << ')';
		return os;
	}
private:
	T m_array[S];
};

int square (int x) 
{
	return x * x;
}
template<int x>
int square (void) 
{
	return x * x;
}

template<char* str>
void foo (void) 
{
	cout << str << endl;
}
char g_str[] = "Hello, World !";
//static char g_str[] = "Hello, World !";
//char const* g_str = "Hello, World !";

int main (void) 
{
	Array<> a1;
	for (int i = 0; i < 3; ++i)
		a1[i] = (i + 1) * 10;
	cout << a1 << endl;
	Array<string, 5> a2;
	a2[0] = "济南";
	a2[1] = "菏泽";
	a2[2] = "滨州";
	a2[3] = "青岛";
	a2[4] = "淄博";
	cout << a2 << endl;
	Array<Array<int, 4>, 3> a3;
	for (int i = 0; i < 3; ++i)
		for (int j = 0; j < 4; ++j)
			a3[i][j] = (i + 1) * 10 +
				j + 1;
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 4; ++j)
			cout << a3[i][j] << ' ';
		cout << endl;
	}
	cout << square (13) << endl; // 169
	cout << square<13> () << endl; // 169
	cout << square<10+3> () << endl;
//	int x = 10, y = 3;
	int const x = 10, y = 3;
//	int const volatile x = 10, y = 3;
	cout << square<x+y> () << endl;
	strcpy (g_str, "minwei");
	foo<g_str> ();
	return 0;
}
