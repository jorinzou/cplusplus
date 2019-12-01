#include <iostream>
#include <string>

using namespace std;

class A
{
public:
		A(const string &s):m_name(s)
		{
		}
		
		void show(void)
		{
			cout << this->m_name << endl;
		}
private:
	string m_name;
};

int main(void)
{
	A a = A("hello");
	a.show();
	return 0;
}
