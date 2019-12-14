#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//排序算法

template<typename T>
void print(T begin,T end)
{
	while(begin != end){
		cout << *begin << endl;
		begin++;
	}
}

bool intCmp(int a,int b)
{
	return a < b;
}

int main(void)
{
	vector<int> v;
	v.push_back(21);
	v.push_back(1);
	v.push_back(12);
	v.push_back(8);
	v.push_back(29);
	print(v.begin(),v.end());
	cout << "---------------------" << endl;
	//sort(v.begin(),v.end(),intCmp);
	sort(v.begin(),v.end());
	cout << "---------------------" << endl;
	print(v.begin(),v.end());

	return 0;
}
