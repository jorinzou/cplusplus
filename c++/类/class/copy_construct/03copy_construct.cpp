#include <iostream>
#include <string>

using namespace std;

class A
{
public:
	A(string &s,const int &p):m_s(s),a(p)
	{
		m_s = s;
	}

	string &m_s;
	const int &a;
};

int main(void)
{
	string s = "123465";
	string &p = s;
	A a(p,235);
	p = "asdfsafsafsadfsadfdfsdff";

	cout << a.m_s << endl;
	cout << a.a << endl;
	return 0;
}
