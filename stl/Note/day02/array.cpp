#include <iostream>
using namespace std;

template<typename T>
class Array 
{
public:
	T& operator[] (size_t i) 
	{
		return m_array[i];
	}
	
	T const& operator[](size_t i) const
	{
		return const_cast<Array&> (*this)[i];
	}
	
	friend ostream& operator<< (ostream& os, Array<T> const& a)
	{
		size_t size = sizeof(a.m_array)/sizeof(a.m_array[0]);
		for (size_t i = 0; i < size; ++i)
			os << '('<< a[i] << ')';
		return os;
	}
private:
	T m_array[3];
};

int main (void) 
{
	Array<int> a;
	a[0] = 10;
	a[1] = 11;
	a[2] = 12;
	cout << a << endl;
	Array<int> const& cr = a;
	cout << cr[0] << endl;
	Array<int> b;
	b[0] = 13;
	b[1] = 14;
	b[2] = 15;
	cout << b << endl;
	Array<int> const* cp = &b;
	cout << (*cp)[0] << endl;
	a = b;
	cout << a << endl;
	Array<string> c;
	c[0] = "北京";
	c[1] = "上海";
	c[2] = "广州";
	cout << c << endl;
	Array<Array<int> > d;
	for (int i = 0; i < 3; ++i)
		for (int j = 0; j < 3; ++j)
			d[i][j] =
				(i + 1) * 10 + j + 1;
//			d.operator[](i).operator[](j)
	cout << d << endl;
	return 0;
}
