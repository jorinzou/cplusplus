#include <iostream>
#include <queue>

//队列的使用
using namespace std;

//构造一个队列
queue<int> & construtor(void)
{
	static queue<int> q;
	q.push(12);
	q.push(13);
	q.push(14);
	q.push(15);
	return q;
}

void print(queue<int> &q)
{
	//队列的大小
	cout << "q size=" << q.size() << endl;
	//判断队列是否为空
	cout << "q empty?" << q.empty() << endl;	
	//返回队列最后一个元素的引用
	cout << "q back=" << q.back() << endl;	
	//返回队列第一个元素的引用
	cout << "q front=" << q.front() << endl;	
	//删除队列第一个元素
	q.pop();
	//删除队列第一个元素后，目前第一个元素是
	cout << "q front=" << q.front() << endl;	
}

int main(void)
{
	queue<int> &q = construtor();
    print(q);	

	return 0;
}
