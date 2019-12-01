#include <iostream>
#include <string>

using namespace std;

//常函数不能修改变量
class A
{
public:
		A(const string &name,const int &age):m_name(name),m_age(age)
		{
		}

	 void show(void)const
	 {
	 		//error
	 		//m_age = 18;
			//m_name = "student";
	 		cout << m_name << endl;
			cout << m_age << endl;
	 }
private:
	string m_name;
	int m_age;
};

int main(void)
{
	A a = A("leijun",45);
	a.show();
	return 0;
}

