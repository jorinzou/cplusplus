#include <iostream>
#include <typeinfo>
using namespace std;

// 通用版本
template<typename A, typename B>
class X 
{
public:
	static void foo (void) 
	{
		cout << "X<A,B>" << endl;
	}
};

// 完全特化
template<>
class X<int, short> 
{
public:
	static void foo (void) 
	{
		cout << "X<int,short>" << endl;
	}
};

// 局部特化
template<typename B>
class X<int, B> 
{
public:
	static void foo (void) 
	{
		cout << "X<int,B>" << endl;
	}
};

template<typename A>
class X<A, A> 
{
public:
	static void foo (void) 
	{
		cout << "X<A,A>" << endl;
	}
};

template<typename A, typename B>
class X<A*, B*> 
{
public:
	static void foo (void) 
	{
		cout << "X<A*,B*> "
			<< typeid (A).name () << ' '
			<< typeid (B).name () <<endl;
	}
};

template<typename A>
class X<A*, A*> 
{
public:
	static void foo (void) 
	{
		cout << "X<A*,A*>" << endl;
	}
};


int main (void) 
{
	X<char, short>::foo ();
	X<int, short>::foo ();
	X<int, char>::foo ();
	X<int, double>::foo ();
	X<float, float>::foo ();
	X<char, char>::foo ();
	X<int*, char*>::foo ();
	X<int***, char*****>::foo ();
	X<int*, int*>::foo ();
	return 0;
}
