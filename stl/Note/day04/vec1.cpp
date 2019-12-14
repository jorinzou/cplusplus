#include <iostream>
#include <vector>
using namespace std;

void print (vector<int> const& vi) 
{
	cout << "对象：" << sizeof (vi)
		<< endl;
	size_t size = vi.size ();
	cout << "大小：" << size << endl;
	cout << "容量：" << vi.capacity ()
		<< endl;
	cout << "元素：";
	for (size_t i = 0; i < size; ++i)
		cout << vi[i] << ' ';
	cout << endl;
}
int main (void) {
	vector<int> v1;
	print (v1);
	vector<int> v2 (3);
	print (v2);
	vector<int> v3 (3, 5);
	print (v3);
	v3.reserve (5);
	print (v3);
	v3.push_back (6);
	print (v3);
	v3.push_back (7);
	print (v3);
	v3.push_back (8);
	print (v3);
	int ai[] = {10, 20, 30, 40, 50};
	vector<int> v4 (ai, ai + 5);
	print (v4);
	vector<int> v5 (&ai[0], &ai[5]);
	// &ai[5] <=> &*(ai+5) <=> ai+5
	print (v5);
	vector<int> v6 (ai + 1, ai + 4);
	print (v6);
	return 0;
}
