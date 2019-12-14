#include <iostream>
#include <deque>

using namespace std;

//双端队列
//兼容vector和queue操作方法,同时新增push_front和pop_front首部插入和首部弹出
//相对于vector和queue而言，deque可以高效在首部进行插入和删除
//相对于list而言，可以提供元素的随机访问

void print(deque<int> &d)
{
	deque<int>::iterator it;
	for(it = d.begin(); it != d.end(); ++it){
		cout << *it << endl;
	}
}

int main(void)
{
	int arr[5] = {1,2,3,4,5};
	deque<int> d(arr,arr+5);
	print(d);
	cout << "--------------------------" << endl; 
	//首部插入元素
	d.push_front(666);
	print(d);

	cout << "--------------------------" << endl; 
	//首部删除元素
	d.pop_front();
	print(d);

	return 0;
}
