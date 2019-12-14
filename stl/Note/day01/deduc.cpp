#include <iostream>
#include <typeinfo>
using namespace std;
template<typename T>
void foo (T x, T y) {
	cout << typeid (x).name () << ' '
		<< typeid (y).name () << endl;
}
template<typename T>
void bar (T const& x, T const& y) {
	cout << typeid (x).name () << ' '
		<< typeid (y).name () << endl;
}
template<typename R, typename T>
R hum (T x) {
	R y;
	cout << typeid (x).name () << ' '
		<< typeid (y).name () << endl;
	return y;
}
int main (void) {
	int a, b;
	foo (a, b); // i i
	double c, d;
	bar (c, d); // d d
	char e[256], f[256];
	foo (e, f); // Pc Pc, e/f: char*
	bar (e, f); // A256_c A256_c,
	            // e/f: char[256]
	e[0] = 'C'; // *(e+0) = 'C'
	cout << 0[e] << endl; // e: char*
	cout << sizeof (e) << endl;
	// 256, e: char[256]
	char (*p)[256] = &e; // e: char[256]
	foo ("hello", "tarena"); // PKc PKc
	/* char[6] char[7]
	bar ("hello", "tarena"); */
	bar<string> ("hello", "tarena");
	// Ss Ss
	/* 隐式推断的同时不能隐式类型转换
	foo (a, c); */
	foo (double (a), c); // d d
	foo<int> (a, c); // i i
	/* 返回类型不参与隐式推断
	c = hum (a); */
	c = hum<double> (a); // i d
	return 0;
}
