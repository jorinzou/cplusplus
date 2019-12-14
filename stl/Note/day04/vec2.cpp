#include <iostream>
#include <vector>
using namespace std;
void print (vector<int> const& vi) {
	for (vector<int>::const_iterator it =
		vi.begin (); it != vi.end ();
		++it)
		cout << /*++*/*it << ' ';
	cout << endl;
}
void rprint (vector<int> const& vi) {
	for (vector<int>::
		const_reverse_iterator it =
		vi.rbegin (); it != vi.rend ();
		++it)
		cout << *it << ' ';
	cout << endl;
}
int main (void) {
	vector<int> vi;
	for (int i = 0; i < 10; ++i)
		vi.push_back (i);
	print (vi);
	rprint (vi);
	// 0 1 2 3 4 5 6 7 8 9
	vector<int>::iterator it1 =
		vi.begin ();
//	cout << *++++++it1 << endl;
	cout << *(it1 += 3) << endl;
	vector<int>::iterator it2 =
		vi.end ();
	cout << *(it2 -= 4) << endl;
	cout << boolalpha << (it1 < it2)
		<< endl; // true
	// it1 + 3 = it2
	// it1 - it2 = -3
	cout << it1 - it2 << endl; // -3
	vector<int>::reverse_iterator it3 =
		vi.rbegin ();
	cout << *(it3 += 3) << endl; // 6
	vector<int>::reverse_iterator it4 =
		vi.rend ();
	cout << *(it4 -= 4) << endl; // 3
	cout << (it3 < it4) << endl; // true
	cout << it3 - it4 << endl; // -3
	vector<int> vn (1, 100);
	it1 = vn.begin ();
	cout << *it1 << endl; // 100
	vn.push_back (200);
	it1 = vn.begin ();
	cout << *it1 << endl; // 100
	return 0;
}
