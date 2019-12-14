#include <iostream>
#include <typeinfo>
using namespace std;

template<typename A = int,typename B = double,typename C = string>
	
	
class X 
{
public:
	void foo (void) const 
	{
		cout << typeid (m_a).name ()
			<< ' '
			<< typeid (m_b).name ()
			<< ' '
			<< typeid (m_c).name ()
			<< endl;
	}
private:
	A m_a;
	B m_b;
	C m_c;
};

template<typename A = int,typename B = double,typename C = string>
void foo (void) 
{
	A a;
	B b;
	C c;
	cout << typeid (a).name () << ' '
		<< typeid (b).name () << ' '
		<< typeid (c).name () << endl;
}

/*
int mul (int x, int y = x) {
	return x * y;
}
*/

template<typename A, typename B = A>
class Y 
{
public:
	static void foo (void) 
	{
		cout << typeid (A).name () << ' '
			<< typeid (B).name ()<< endl;
	}
};

template<typename A = int, typename B>
void bar (B arg) 
{
	cout << typeid (A).name () << ' '
		<< typeid (B).name () << endl;
}

template<typename T = int>
void hum (T arg) 
{
	cout << typeid (T).name () << endl;
}

int main (void) 
{
	X<float, char, long> x1;
	x1.foo (); // f c l
	X<float, char> x2;
	x2.foo (); // f c Ss
	X<float> x3;
	x3.foo (); // f d Ss
	X<> x4;
	x4.foo (); // i d Ss
	foo<float, char, long> ();
	foo<float, char> ();
	foo<float> ();
	foo<> ();
	foo ();
//	cout << mul (8, 9) << endl; // 72
//	cout << mul (8) << endl; // 64
	Y<int>::foo ();
	bar (3.14);
	hum (3.14);
	return 0;
}
