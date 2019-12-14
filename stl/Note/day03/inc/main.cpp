#include <iostream>
using namespace std;
#include "max.h"
int main (void) {
	int a = 123, b = 456;
	double c = 1.3, d = 4.6;
	string e = "hello", f = "world";
	cout << ::max (a, b) << endl;
	cout << ::max (c, d) << endl;
	cout << ::max (e, f) << endl;
	Comparator<int> ci (a, b);
	cout << ci.max () << endl;
	Comparator<double> cd (c, d);
	cout << cd.max () << endl;
	Comparator<string> cs (e, f);
	cout << cs.max () << endl;
	return 0;
}
