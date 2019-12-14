#include <vector>
#include <algorithm>
#include "print.h"

bool intCmp (int a, int b) 
{
	return a > b;
}

class IntCmp 
{
public:
	bool operator() (int a, int b) const
	{
		return a > b;
	}
};

int main (void) {
	vector<int> vi;
	vi.push_back (33);
	vi.push_back (11);
	vi.push_back (44);
	vi.push_back (22);
	vi.push_back (11);
	print (vi.begin (), vi.end ());
//	sort (vi.begin (), vi.end ());
//	sort (vi.rbegin (), vi.rend ());
	sort (vi.begin (), vi.end (),
		/*intCmp*/IntCmp ());
	print (vi.begin (), vi.end ());
	return 0;
}
