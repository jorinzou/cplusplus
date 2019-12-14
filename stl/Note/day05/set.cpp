#include <iostream>
#include <set>

using namespace std;
int main (void) 
{
	set<int> si;
	si.insert (10);
	si.insert (30);
	si.insert (50);
	si.insert (70);
	si.insert (90);
	si.insert (30);
	si.insert (70);
	si.insert (10);
	si.insert (90);
	si.insert (50);
	for (set<int>::iterator it = si.begin (); it != si.end (); ++it)
		cout << *it << ' ';
	cout << endl;
	
	multiset<int> msi;
	msi.insert (10);
	msi.insert (30);
	msi.insert (50);
	msi.insert (70);
	msi.insert (90);
	msi.insert (30);
	msi.insert (70);
	msi.insert (10);
	msi.insert (90);
	msi.insert (50);
	for (multiset<int>::iterator it =msi.begin (); it != msi.end ();++it)
		cout << *it << ' ';
	cout << endl;
	
	return 0;
}
