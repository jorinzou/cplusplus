#include <iostream>
#include <set>

using namespace std;

//相对集合而，多重集合允许元素重复

//初始化多重集合
void init_multiset(multiset<int> &s)
{	
	s.insert(11);
	s.insert(11);
	s.insert(12);
	s.insert(13);
	s.insert(13);
	s.insert(14);
	s.insert(14);
}

//遍历集合
void print(multiset<int> &s)
{
	multiset<int>::iterator it = s.begin();
	for(it; it != s.end(); ++it){
		cout << *it << endl;
	}
}

int main(void)
{
	multiset<int> s;
	init_multiset(s);
	print(s);


	return 0;
}
