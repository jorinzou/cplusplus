#include <iostream>
using namespace std;

template<typename T>
void foo (void) 
{
	T var = T ();
//	int var = int ();
// 	double var = double ();
//	string var = string ();
	// ...
	cout << '[' << var << ']' << endl;
}

template<typename T>
class A 
{
public:
	A (void) : m_var () 
	{}
	
	void foo (void) const 
	{
		cout << '[' << m_var << ']'<< endl;
	}
private:
	T m_var;
};

int main (void) 
{
	foo<int> ();
	foo<string> ();
	A<int> a1;
	a1.foo ();
	A<string> a2;
	a2.foo ();
	return 0;
}
