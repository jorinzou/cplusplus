#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <list>
using namespace std;
class IntCmp {
public:
	bool operator() (int a, int b) const{
		return a > b;
	}
};
int main (void) {
//	stack<string, vector<string> > ss;
//	stack<string, list<string> > ss;
	stack<string/*, deque<string>*/ > ss;
	ss.push ("C++!");
	ss.push ("喜欢");
	ss.push ("我们");
	while (! ss.empty ()) {
		cout << ss.top () << flush;
		ss.pop ();
	}
	cout << endl;
	queue<string, list<string> > qs;
//	queue<string/*, deque<string>*/ > qs;
//	queue<string, vector<string> > qs;
	qs.push ("我们");
	qs.push ("喜欢");
	qs.push ("C++!");
	while (! qs.empty ()) {
		cout << qs.front () << flush;
		qs.pop ();
	}
	cout << endl;
	priority_queue<int, vector<int>,
	   IntCmp> pq;
//	priority_queue<int, list<int>,
//	   IntCmp> pq;
	pq.push (40);
	pq.push (30);
	pq.push (50);
	pq.push (70);
	pq.push (60);
	while (! pq.empty ()) {
		cout << pq.top () << ' ';
		pq.pop ();
	}
	cout << endl;
	return 0;
}
