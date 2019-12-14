#include <cstring>
#include <iostream>
#include <typeinfo>
using namespace std;
template<typename T>
T const& max (T const& x, T const& y) {
	cout << "<1" << typeid (x).name ()
		<< '>' << flush;
	return x < y ? y : x;
}
template<typename T>
T* const& max (T* const& x,
	T* const& y) {
	cout << "<2" << typeid (x).name ()
		<< '>' << flush;
	return *x < *y ? y : x;
}
char const* const& max (
	char const* const& x,
	char const* const& y) {
	cout << "<3" << typeid (x).name ()
		<< '>' << flush;
	return strcmp (x, y) < 0 ? y : x;
}
/*
char const* max (char const* x,
	char const* y) {
	cout << "<3" << typeid (x).name ()
		<< '>' << flush;
	return strcmp (x, y) < 0 ? y : x;
}
*/
template<typename T>
T const& max (T const& x, T const& y,
	T const& z) {
	cout << "<4" << typeid (x).name ()
		<< '>' << flush;
	// 重载解析在函数模板被第二次编译时
	// 进行，因此类型约束性最强的普通函
	// 数会被优先选择
	return ::max (::max (x, y), z); // 3
}
/* 重载版本的选择范围在函数模板被第一次
   编译时确定，因此一定要保证所有期望被
   重载选择的版本在调用模板被第一次编译
   时可见，否则该版本将失去被选择的机会
char const* const& max (
	char const* const& x,
	char const* const& y) {
	cout << "<3" << typeid (x).name ()
		<< '>' << flush;
	return strcmp (x, y) < 0 ? y : x;
}
*/
int main (void) {
	int a = 123, b = 456;
	cout << ::max (a, b) << endl; // 1
	cout << *::max (&a, &b) << endl; // 2
	char const* x = "ABC";
	char const* y = "AB";
	char const* z = "A";
	cout << ::max (y, x) << endl; // 3
	cout << ::max (z, y, x) << endl; // 4
	// 带有模板参数表的调用只能在模板化
	// 函数的不同版本中选择
	cout << ::max<> (y, x) << endl; // 2
	// 类型约束性强者优先选择的前提是参
	// 数的类型要一致
	cout << ::max<char const*> (y, x)
		<< endl; // 1
	char const* const& r = ::max (
		z, y, x);
	cout << r << endl;
	char const* m = "123";
	char const* n = "12";
	char const* o = "1";
	::max (m, n, o);
	cout << r << endl;
	return 0;
}
