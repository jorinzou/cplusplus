#include <iostream>
using namespace std;
#define max(x, y) ((x) < (y) ? (y) : (x))
int main (void) {
	int a = 123, b = 456;
	cout << max (a, b) << endl;
	double c = 1.3, d = 4.6;
	cout << max (c, d) << endl;
	string e = "hello", f = "world";
	cout << max (e, f) << endl;
	char g[] = "hello", h[] = "world";
	cout << max (g, h) << endl;
	return 0;
}
