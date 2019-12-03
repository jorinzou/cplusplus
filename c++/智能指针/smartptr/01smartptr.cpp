#include <iostream>
#include <string>

using namespace std;

//智能指针,重载*,->
class A
{
public:
	A(string s = ""):m_str(s)
	{
	
	}
	string m_str;
};

class PA
{
public:
	PA(A *pa = NULL):a(pa)
	{
	}

	~PA()
	{
		if (a){
			delete a;
			a = NULL;
			cout << "delete a" << endl;
		}
	}

	A operator*(void)const
	{
		return *a;
	}

	A *operator->(void)const
	{
		return a;
	}

private:
	A *a;
};

int main(void)
{
	PA p(new A("date is 2019"));
	cout << p->m_str << endl;
	cout << (*p).m_str << endl;
	return 0;
}
