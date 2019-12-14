#include <iostream>
#include <stack>

using namespace std;

int main(void)
{
	stack<int> s;
	//压栈操作
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);

	cout << "size=" << s.size() << endl;
	cout << "top=" << s.top() << endl;
	cout << "empty?" << s.empty() << endl;

	//移除栈顶元素
	s.pop();
	cout << "top=" << s.top() << endl;

	return 0;
}
