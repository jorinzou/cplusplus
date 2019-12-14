#include <iostream>
#include <map>
using namespace std;
int main (void) {
	multimap<string, int> msi;
	msi.insert (make_pair ("张飞", 40));
	msi.insert (make_pair ("赵云", 50));
	msi.insert (make_pair ("关羽", 60));
	msi.insert (make_pair ("张飞", 70));
	msi.insert (make_pair ("赵云", 80));
	msi.insert (make_pair ("关羽", 90));
	
	typedef multimap<string,int>::iterator IT;
		
	for (IT it = msi.begin ();it != msi.end (); ++it)
		cout << it->first << "：" << it->second << endl;
	
	cout << "--------" << endl;
	
	pair<IT, IT> its = msi.equal_range("张飞");
		
	int sum = 0;
	for (IT it = its.first;it != its.second; ++it)
		sum += it->second;
	
	cout << "张飞：" << sum << endl;
	cout << "--------" << endl;
	
	for (IT it = msi.begin ();it != msi.end (); ++it)
	{
		string key = it->first;
		IT end = msi.upper_bound (key);
		sum = 0;
		
		for (; it != end; ++it)
			sum += it->second;
		
		cout << key << "：" << sum << endl;
			
		--it;
	}
	return 0;
}
