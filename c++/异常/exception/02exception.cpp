#include <iostream>
#include <cstdio>

using namespace std;

//标准异常类，使用

class A:public exception
{
public:
	A()
	{
	}

	const char *what(void)const throw()
	{
			return "A exception";
	}
};

int main(void)
{
	try{
		A a = A();
		throw a;
	}
	catch(exception &ex){
		cout << ex.what() << endl;
	}
	return 0;
}
