#include <iostream>
#include <set>

using namespace std;

//集合的使用,元素必须唯一,没有值的映射

//初始化集合
void init_set(set<int> &s,int *arr,int size)
{	
	for(int i = 0; i < size; ++i){
		s.insert(*arr);
		arr++;
	}
}

//遍历集合
void print(set<int> &s)
{
	set<int>::iterator it = s.begin();
	for(it; it != s.end(); ++it){
		cout << *it << endl;
	}
}

//返回大于某个值的迭代器
void set_upper_bound(set<int> &s)
{
	cout << "upper bound-----------------------" << endl;
	set<int>::iterator it = s.upper_bound(33);
	for(it; it != s.end(); ++it){
		cout << *it << endl;
	}
}

int main(void)
{
	int arr[5] = {11,22,33,44,55};
	set<int> s;
	init_set(s,&arr[0],sizeof(arr)/sizeof(arr[0]));
	print(s);

	set_upper_bound(s);

	return 0;
}
