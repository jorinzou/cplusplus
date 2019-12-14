#include <iostream>
using namespace std;

template<typename T>
T sum (T x, T y) 
{
	return x + y;
}

class Integer 
{
public:
	Integer (int arg = 0) :m_var (arg)
	{
		
	}
		
	Integer const operator+ (Integer const& rhs) const
	{
		return m_var + rhs.m_var;
	}
	
	friend ostream& operator<<(ostream& os, Integer const& i)
	{
		return os << i.m_var;
	}
private:
	int m_var;
};

int main (void) 
{
	cout << sum<int> (123, 456) << endl;
	cout << sum<double> (1.3, 4.6)<< endl;
		
	cout << sum<string> ("Hello, ","World !") << endl;
		
	cout << sum<Integer> (123, 456)<< endl;
		
	/* 指针类型不支持"+"号运算且无法重载
	cout << sum<int*> (NULL, NULL)
		<< endl; */
	return 0;
}
