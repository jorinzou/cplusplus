#include <list>
#include <algorithm>
#include "print.h"

class IntCmp 
{
public:
	bool operator() (int a, int b) const
	{
		return a > b;
	}
};


int main (void) 
{
	int arr[] = {10,10,20,20,10,20,30,20,20,10,10};
		
	list<int> li (arr, arr + sizeof (arr) / sizeof (arr[0]));
		
	print (li.begin (), li.end ());
	
	li.unique ();
	print (li.begin (), li.end ());
//	sort (li.begin (), li.end ());

	li.sort (IntCmp ());
	print (li.begin (), li.end ());
	li.unique ();
	print (li.begin (), li.end ());
	list<int> ln;
	ln.push_back (1000);
	ln.push_back (2000);
	ln.push_back (3000);
	ln.push_back (4000);
	ln.push_back (5000);
	list<int>::iterator pos = li.begin();
//	li.splice (++pos, ln);
//	list<int>::iterator del = ln.begin();
//	li.splice (++pos, ln, ++++del);
	list<int>::iterator begin =
		ln.begin (), end = ln.end ();
	li.splice (++pos, ln, ++begin,--end);
	cout << "li: " << flush;
	print (li.begin (), li.end ());
	cout << "ln: " << flush;
	print (ln.begin (), ln.end ());
	li.clear ();
	li.push_back (10);
	li.push_back (50);
	li.push_back (60);
	li.push_back (90);
	li.push_back (90);
	li.sort (IntCmp ());
	ln.clear ();
	ln.push_back (20);
	ln.push_back (30);
	ln.push_back (70);
	ln.push_back (80);
	ln.sort (IntCmp ());
	cout << "li: " << flush;
	print (li.begin (), li.end ());
	cout << "ln: " << flush;
	print (ln.begin (), ln.end ());
	li.merge (ln, IntCmp ());
	cout << "li: " << flush;
	print (li.begin (), li.end ());
	cout << "ln: " << flush;
	print (ln.begin (), ln.end ());
	return 0;
}
