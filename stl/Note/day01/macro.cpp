#include <iostream>
using namespace std;
#define MAX(T) \
T max_##T (T x, T y) { \
	return x < y ? y : x; \
}
MAX (int)
MAX (double)
MAX (string)
#define max(T) max_##T
int main (void) {
	int a = 123, b = 456;
	cout << max(int) (a, b) << endl;
	double c = 1.3, d = 4.6;
	cout << max(double) (c, d) << endl;
	string e = "hello", f = "world";
	cout << max(string) (e, f) << endl;
	char g[] = "hello", h[] = "world";
	cout << max(string) (g, h) << endl;
	return 0;
}
