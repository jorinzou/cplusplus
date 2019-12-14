#include <cstdlib>
#include <iostream>
using namespace std;
template<typename T>
class A {
public:
	int m_var;
	void fun (void) const {
		cout << m_var << endl;
	}
	void exit (int status) {
		cout << "再见！" << endl;
	}
protected:
	typedef unsigned int uint;
};
template<typename T>
class B : public A<T> {
public:
	void foo (void) {
//		A<T>::m_var = 100;
		this->m_var = 100;
//		A<T>::fun ();
		this->fun ();
		typename A<T>::uint u = 101;
		cout << u << endl;
		A<T>::exit (0);
	}
};
int main (void) {
	B<int> b;
	b.foo ();
	return 0;
}
