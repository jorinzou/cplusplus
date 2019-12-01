#include <iostream>
#include <string>

using namespace std;

//非常对象可以调用常函数，也可以调用非常函数
//常对象只能调用常函数
class A
{
public:
		A(const string &name,const int &age):m_name(name),m_age(age)
		{
		}

	 void show(void)const
	 {
	 		cout << m_name << endl;
			cout << m_age << endl;
	 }

	 void add (void)
	 {
	 		m_age++;
	 }
private:
	string m_name;
	int m_age;
};

int main(void)
{
	A a = A("leijun",45);
	a.add();
	a.show();
	
	A a2 = A("mayun",56);
	const A &p = a2;
	p.show();
	//p.add(); error

	return 0;
}

