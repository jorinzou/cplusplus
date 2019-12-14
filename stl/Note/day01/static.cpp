#include <iostream>
using namespace std;

template<typename T>
class A 
{
public:
	void foo (void) const 
	{
		cout << "&m_var: " << &m_var << ", "
			<< "&s_var: " << &s_var << endl;
	}
private:
	int m_var;
	static int s_var;
};

template<typename T>
int A<T>::s_var = 0;

int main (void) {
	A<int> a, b;
	A<double> c, d;
	a.foo ();
	b.foo ();
	c.foo ();
	d.foo ();
	return 0;
}
