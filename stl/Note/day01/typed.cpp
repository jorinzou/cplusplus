#include <iostream>
using namespace std;
int max_int (int x, int y) {
	return x < y ? y : x;
}
double max_double (double x, double y) {
	return x < y ? y : x;
}
string max_string (string x, string y) {
	return x < y ? y : x;
}
int main (void) {
	int a = 123, b = 456;
	cout << max_int (a, b) << endl;
	double c = 1.3, d = 4.6;
	cout << max_double (c, d) << endl;
	string e = "hello", f = "world";
	cout << max_string (e, f) << endl;
	char g[] = "hello", h[] = "world";
	cout << max_string (g, h) << endl;
	return 0;
}
