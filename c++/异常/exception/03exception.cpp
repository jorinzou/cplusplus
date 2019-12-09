#include <iostream>
#include <cstdio>

using namespace std;

//异常说明使用

void func(void)throw(int)//指明抛出的异常类型
{
	FILE *fp = fopen("/tmp/fp.bat","r");
	if (fp == NULL){
		throw(-1);
	}
}

int main(void)
{
	try{
		func();
	}
	catch(int ret){
		cout << ret << endl;
	}
	return 0;

}
