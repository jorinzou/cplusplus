#include <iostream>
#include <vector>

using namespace std;

//迭代器的使用

//iterator迭代器
void iterator_print(vector<int> &v)
{
	vector<int>::iterator it;
	cout << "iterator" << endl;
	for(it=v.begin(); it != v.end(); ++it){
			cout << *it << endl;
	}
	cout << "iterator" << endl;
}

//const iterator迭代器
void const_iterator_print(const vector<int> &v)
{
	vector<int>::const_iterator it;
	cout << "const iterator" << endl;
	for(it = v.begin(); it != v.end(); ++it){
		cout << *it << endl;
	}
	cout << "const iterator" << endl;
}

//反向迭代器 reverse iterator
void reverse_iterator_print(vector<int> &v)
{
	vector<int>::reverse_iterator it;
	cout << "reverse iterator" << endl;
	for(it = v.rbegin(); it != v.rend(); ++it){
		cout << *it << endl;
	}
	cout << "reverse iterator" << endl;
}

int main(void)
{
	int arr[5] = {1,2,3,4,5};
	vector<int> v(arr,arr+5);
	iterator_print(v);
	const_iterator_print(v);
	reverse_iterator_print(v);

	return 0;
}
