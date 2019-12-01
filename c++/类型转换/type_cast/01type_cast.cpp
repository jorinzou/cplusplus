#include <iostream>

using namespace std;

//隐式类型转换
int func(int a)
{
	cout << a << endl;
	return 0;
}

//显式类型转换
void func(void)
{
	char a = 'A';
	int num = (int)a;
	cout << num << endl;
}

//静态类型转换
int static_type_cast(void)
{
	int a = 100;
	void *p = &a;
	int *p_a = static_cast<int*>(p);
	cout << *p_a << endl;
	
	#if 0
	//error
	double d = 3.14;
	p_a = static_cast<int *>(&d);
	cout << *p_a << endl;
	#endif
	return 0;
}

//常类型转换
void const_cast_type(void)
{
	int a = 90;
	const int *p = &a;
	cout << p << endl;
	//*p = 345;error
	int *p_a = const_cast<int*>(p);
	*p_a = 123;
	cout << *p_a << endl;
}

void reinterpret_cast_type(void)
{
	long addr = 0x7fff54d443bc;
	long *p = reinterpret_cast<long*>(addr);
	*p = 1234567;//段错误
	cout << *p << endl;
}

int main(void)
{
	char a = 'A';
	func(a);

	func();
	static_type_cast();
	const_cast_type();
	reinterpret_cast_type();
	return 0;
}
