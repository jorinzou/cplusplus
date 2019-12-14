#include <iostream>
#include <queue>
#include <vector>

using namespace std;

//优化队列使用

//优化队列比较器
class IntCmp
{
public:
	bool operator()(int a,int b)const
	{
		return a < b;//最大优化出队
	}
};


int main(void)
{
	priority_queue<int,vector<int>, IntCmp> pq;
	pq.push(23);
	pq.push(2);
	pq.push(9873);
	pq.push(3);

	cout << pq.top() << endl;


	return 0;
}
