#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class A {
public:
	A (void) {
		cout << "缺省构造：" << this
			<< endl;
	}
	A (A const& that) {
		cout << "拷贝构造：" << &that
			<< "->" << this << endl;
	}
	A& operator= (A const& rhs) {
		cout << "拷贝赋值：" << &rhs
			<< "->" << this << endl;
	}
	~A (void) {
		cout << "析构函数：" << this
			<< endl;
	}
	bool operator== (A const& rhs) const{
		cout << "相等判断" << endl;
		return true;
	}
	bool operator< (A const& rhs) const {
		cout << "小于比较" << endl;
		return true;
	}
};
int main (void) {
	cout << "------ 1 ------" << endl;
	vector<A> va (3);
	cout << "------ 2 ------" << endl;
	va.push_back (A ());
	cout << "------ 3 ------" << endl;
	va.erase (va.begin ());
	cout << "------ 4 ------" << endl;
	find (va.begin (), va.end (), A ());
	sort (va.begin (), va.end ());
	cout << "------ X ------" << endl;
	return 0;
}
