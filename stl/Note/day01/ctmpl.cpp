#include <iostream>
using namespace std;

//类模板
template<typename T>
class Comparator 
{
public:
	Comparator (T x, T y) :m_x(x),m_y(y)
    {
		
	}
	
	Comparator (Comparator const& that) :m_x (that.m_x), m_y (that.m_y)
	{
		
	}
	
	Comparator& operator= (Comparator const& rhs)
    {
		if (&rhs != this) 
		{
			m_x = rhs.m_x;
			m_y = rhs.m_y;
		}
		return *this;
	}
	
	T min (void) const 
	{
		return m_x < m_y ? m_x : m_y;
	}
	
	T max (void) const 
	{
		return m_x < m_y ? m_y : m_x;
	}
private:
	T m_x;
	T m_y;
};

class Integer 
{
public:
	Integer (int arg = 0) : m_var (arg) 
	{
		
	}
	
	bool operator< (Integer const& rhs) const 
	{
		return m_var < rhs.m_var;
	}
	
	friend ostream& operator<< (ostream& os,Integer const& i)
	{
		return os << i.m_var;
	}
private:
	int m_var;
};

int main (void) 
{
	Comparator<int> ci (123, 456);
	cout << ci.min () << ' '<< ci.max () << endl;
		
	Comparator<double> cd (1.3, 4.6);
	cout << cd.min () << ' '<< cd.max () << endl;
		
	Comparator<string> cs ("hello", "world");
	cout << cs.min () << ' '<< cs.max () << endl;
		
	Comparator<Integer> cn (123, 456);
	cout << cn.min () << ' '<< cn.max () << endl;
		
	Comparator<Integer> co = cn;
	cout << co.min () << ' '<< co.max () << endl;
		
	Comparator<Integer> cp (234, 567);
	co = cp;
	cout << co.min () << ' '<< co.max () << endl;
		
	return 0;
}
