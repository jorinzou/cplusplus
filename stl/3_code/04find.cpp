#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

//查找算法

int main(void)
{
	vector<int>v;
	v.push_back(22);
	v.push_back(34);
	v.push_back(56);
	v.push_back(234);

	vector<int>::iterator it = find(v.begin(),v.end(),234);
	cout << *it << endl;
	return 0;
}
