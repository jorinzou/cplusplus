#include <iostream>
#include <cstdio>

using namespace std;

//c++异常使用

class A
{
public:
	A()
	{
	
	}

	int OpenFile(void)
	{
		fp = fopen("/tmp/test.out","r");
		if (fp == NULL){
				throw -1;
		}
	}

	FILE *fp;
};

int main(void)
{
		A a = A();
		try{
			a.OpenFile();
		}

		catch(int ret){
			if (ret == -1){
				cout <<  "open file failure" << endl;
			}
		}
	return 0;
}
